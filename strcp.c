#include <stdio.h>
#include <string.h>

void copyStr(char* dest, char* src){

    int len = strlen(src);
    for (int i = 0; i< len;  i++){
        // dest[i] = src[i];
        *dest = *src;
        dest ++;
        src ++;
    }
}

int main()
{
    char buf[1024];

    char * s = "helloworld";
    copyStr(buf,s);

    printf("%s\n", buf);

    return 0;
}
