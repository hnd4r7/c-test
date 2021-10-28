#include <stdio.h>

void dosort01(int p[], int len)
{
    // printf("%d\n", *p);
    for(int i = 0; i < len -1; i ++ ){
        for (int j = i+1; j < len; j ++){
            if(p[i] > p[j]){
                int tmp = p[i];
                p[i] = p[j]; 
                p[j] = tmp;
            }
        }
    }
    return;
}

int main()
{
    int p[] = {8, 2, 7, 4};
    dosort01(p, sizeof(p) / sizeof(int));
    for (int i = 0; i < sizeof(p) / sizeof(int); i++)
    {
        printf("%d\n", p[i]);
    }
}