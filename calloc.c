#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* mallocStr(){
    char* p = malloc(10);


    for(int i = 0; i< 10;i++){
        *(p+i) = 'h';
    }

    return p;
}

int main(int argc, char const *argv[])
{
    int *  p  = calloc(10 , sizeof(int)); // 清0

    for ( int i  = 0; i < 10 ; i ++ ){
        printf("%d\n", p[i]);
        p[i] = i;
    }
    
    int * p2 = realloc(p, sizeof(int) * 20);

    for( int i = 0; i< 20 ; i++ ){
        printf("%d", p2[i]);
    }
    printf("\n");

    printf("%s\n",mallocStr());
}
