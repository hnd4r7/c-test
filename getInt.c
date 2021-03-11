#include<stdio.h>
#include<ctype.h>

#define BUFSIZE 100

char buf[BUFSIZE];		/* buffer for ungetch */
int bufp = 0;			/* next free position in buf */

int getch(void) /* get a (possibly pushed back) char */
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetch(int c)		/* push char back on input */
{
	if (bufp >= BUFSIZE) {
		printf("Error: ungetch: too many characters\n");
	}
	else {
		buf[bufp++] = c;
	}
}

/* getint: get next integer from input into *pn */
int getint(int *pn)
{
	int c, sign;

	while (isspace(c = getch()))
		;
	if (!isdigit(c) && c != EOF && c != '-' && c != '+') {
		ungetch(c);
		return 0;
	}
	sign = (c == '-') ? -1 : 1;
	if (c == '-' || c == '+') {
		c = getch();
	}
	if (!isdigit(c) && c != EOF) {
		ungetch(c);
		return 0;	/* not a number */
	}
	else {
		for (*pn = 0; isdigit(c); c = getch()) {
			*pn = *pn * 10 + c - '0';
		}
		*pn *= sign;
		if (c != EOF) {
			ungetch(c);
		}
	}
	return c;
}
