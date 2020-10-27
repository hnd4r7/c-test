#include <stdio.h>
int main(void){
    printf("fdsafasdfasfl");
    char ch;
    while ((ch = getchar()) != '#'){
        putchar(ch);
        putchar('r');
    }
    return 0;
}