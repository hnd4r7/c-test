#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int bb = 1000;
int bbb = 1000;

const int c = 100;

int *mallocArray()
{
  int *p = malloc(sizeof(int) * 4);
  if (p == NULL)
  {
    return NULL;
  }
  for (int i = 0; i < 4; i++)
  {
    p[i] = 100 + i;
  }

  return p;
}

void malloStr(char **p)
{
  char *pc = malloc(100);
  memset(pc, 0, 100);
  strcpy(pc, "hello world");
  *p = pc;
}

int main()
{
  int *p = mallocArray();
  for (int i = 0; i < 4; i++)
  {
    printf("%d\n", p[i]);
  }

  char *pc = NULL;
  malloStr(&pc);

  printf("%s\n", pc);

  free(p);
  p = NULL;

  printf("%d\n", bb);
  printf("%d\n", bbb);

  int cc[c];

  const int ccc = 10;
  int cccc[ccc];

  char *add1 = "hello";
  char *add2 = &"hello";

  if (add1 == add2)
  {
    printf("hhhh");
  }

  return 0;
}
