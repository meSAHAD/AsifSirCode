//->create two sets and perform cartesian prosucts

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int A[10], B[10], C[10], n, m;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &A[i]);
    scanf("%d", &m);
    for (int i = 0; i < m; i++)
        scanf("%d", &B[i]);

    printf("The cartesian product of two sets is = :{");
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < m; j++)
        {
            printf("(");
            printf("%d, %d", A[i], B[j]);
            if (i == n - 1 && j == m - 1)
                printf(")");
            else
                printf("), ");
        }
    }
    printf("}\n");
    return 0;
}