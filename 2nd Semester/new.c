#include <stdio.h>
#include <conio.h>

void intersection(int a[], int b[], int n1, int n2)
{
    int c[10], k = 0, i, j;
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
        printf("%d ", c[i]);
    }
}

int main()
{
    int a[10], b[10], n1, n2, i, j;
    
    scanf("%d", &n1);
   
    for (i = 0; i < n1; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &n2);
    for (j = 0; j < n2; j++)
    {
        scanf("%d", &b[j]);
    }
    intersection(a, b, n1, n2);
    return 0;
}
