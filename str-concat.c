#include <stdio.h>
#include <string.h>

int main()
{
    char buf[1024];
    memset(buf,0,1024);
    char str[] = "abcdefg";
    char str2[] = "hijklmn";
    sprintf(buf,"%s%s",str, str2);
    printf("%s\n",buf);
}
