#include <stdio.h>

void sum_rows1(double *a, double *b, long n)
{
    long i, j;
    for (i = 0; i < n; i++)
    {
        b[i] = 0;
        for (int j = 0; j < 3; j++)
        {
            b[i] += a[i * n + j];
        }
    };
}

int main()
{
    double A[9] = {0, 1, 2, 4, 8, 16, 32, 64, 128};
    double *B = A + 3;
    // double B[3] = {};
    sum_rows1(A, B, 3);
    for (int i = 0; i < 3; i++)
    {
        printf("%f\n", B[i]);
    }
}