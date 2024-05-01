#include <stdio.h>

int main()
{
    int i, n, j;
    
    scanf("%d", &n);

    int a1[n];
    int a2[n];
    int intersection[2 * n], unions[n];

    for (i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }
    for (j = 0; j < n; j++)
    {
        scanf("%d", &a2[j]);
    }
    int indexs = -1, indexu = -1;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            unions[++indexu] = a1[j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a1[i] == a2[j])
            {
                intersection[++indexs] = a2[j];  
            }
            else if (a1[j] != a2[i])
            {
                unions[++indexu] = a2[j];
            }
        }
    }

    printf("Intersection:\n");
    for (i = 0; i <= indexs; i++)
        printf("%d", intersection[i]);
    printf("\n");
    printf("Union:\n");
    for (j = 0; j <= indexu; j++)
        printf("%d", unions[j]);
    printf("\n");
    return 0;
}