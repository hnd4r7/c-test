#include <stdio.h>

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5};
    // int * p = &arr;
    typedef int(ARR_TYP)[5];
    ARR_TYP * p = &arr;
    printf("%d\n",(*p)[4]);

    typedef int(*ARR_TYP_POINTER)[5];
    ARR_TYP_POINTER p2 = &arr;
    printf("%d\n",(*p2)[4]);
}
