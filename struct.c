#include <stdio.h>

struct h
{
    int a, b, c;
};

int
main()
{
    struct h x[5];
    struct h *hp;
    for (hp = x; hp < &x[5]; hp++){
        printf("%ld\n", hp - x);
    }

    struct h hx = {1,2,3};
    return 0;
}