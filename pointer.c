#include <stdio.h>

int testx(int *p);

int main(){
    printf("%s","ssssss");
    int a[] = {2,99};
    testx(a);
    return 1;
}
int testx(int *p){
    printf("%d", *p);
    p += 1;
     printf("%d", *p);
    return 1;
}

// char* makeABC() {
//  char y[3] = {'a', 'b', 'c'};
//  return y;
// }