#include <stdio.h>

int main(){
    long * x;
    printf("%llu\n",sizeof(x));

    int a[] = {1,2,3};
    int b = sizeof(a);
    printf("%d\n",b);
    int * c = (int * )(&a + 1) -1;
    printf("%d\n",*c);
    printf("%d\n",*a);

}