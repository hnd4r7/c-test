#include <stdio.h>
#include <string.h>

int testx(int *p);

int main()
{
    char s[] = {'h', 'e','l','l','o','\0','0','0'};
    printf("%s\n", s);

    char* s2 =  "hello";
    printf("%d\n",sizeof s2);

    char s3[] =  "hello\0world";
    printf("%d\n",sizeof s3);
    printf("%d\n",strlen(s3));

    return 1;
}
