#include <stdio.h>

char getInt();

char getInt(){
    return 1 ;
}

int main() {
int x = 1, y = 2, z[10];

int *ip;

/* ip is a pointer to int */
ip = &x;

y = *ip;

*ip = 0;

ip = &z[0];

/* ip now points to x */

/* y is now 1 */

/* x is now 0 */

/* ip now points to z[0] */
}
