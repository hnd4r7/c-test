#include <stdio.h>

int main(){

    char c0 [] = "dsadas";
    *c0 = 'a'; //栈上变量可修改
    printf("%s\n",c0);

    char *c1;
    c1 = "dsaofdsfdsfu";
    printf("%s\n",c1);
    printf("c1: %llu\n",sizeof(c1));


    int* i1;
    printf("i1: %llu\n",sizeof(i1));

    char cc[] = {'1','a','a','a','a'};
    printf("cc :%llu\n",sizeof(cc));

    char c2 = 'a';
    printf("%llu\n",sizeof(c2));
//
//    *c1 = 'b'; //文字常量不可改
//    printf("%s\n",c1);

    char buf[99] = "";
    sprintf(buf,"xxx%s%s","fkldjs","lll");
    printf("buf:%s\n",buf);
}