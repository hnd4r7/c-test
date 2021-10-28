#include <stdio.h>
#include <string.h>

void reverse(char* src){
    printf("%d\n",strlen(src));
    int len = strlen(src);

    for(int i = 0; i < len -1 -i; i ++ ){
        char tmp = src[i];
        src[i] = src[len -1 -i];
        src[len -1 -i] = tmp;
    }
}

int main()
{
    char str[] = "abcdefg";
    reverse(str);
    
    printf("%s\n",str);

    return 0;
}
