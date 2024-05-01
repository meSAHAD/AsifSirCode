#include<stdio.h>
#include<conio.h>
int main()
{

    int a[10], b[10], c[10], n1, n2, n, k = 0, i, j;
    printf("Enter the number of set A:\n");
    scanf("%d", &n1);
    printf("Enter the element of set A:\n");
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter the number of set B:\n");
    scanf("%d", &n2);
    printf("Enter the element of set B:\n");
    for (j = 0; j < n2; j++)
    {
        scanf("%d", &b[j]);
    }
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < n2; j++)

        {
            if (a[i] == b[j])
            {
                c[k] = a[i];
                k++;
            }
        }
    }
    printf("Intersection of set A and B: ");
    for (i = 0; i < k; i++)
    {
        printf("%d", c[i]);
    }
    return 0;
}