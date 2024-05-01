#include <stdio.h>
#include <conio.h>
void main()
{
    int a[10], b[10], i, c[10], j, k = 0, n1, n2;
    //read a
    scanf("%d", &n1);
    for (i = 0; i < n1; i++)
        scanf("%d", &a[i]);
    //read b
    scanf("%d", &n2);
    for (i = 0; i < n2; i++) scanf("%d", &b[i]);

    // logic for calculate union
    // copy the element of set A in set C
    for (i = 0; i < n1; i++)
    {
        for (j = 0; j < k; j++)
        {
            if (c[j] == a[i]) break;
        }
        if (j == k) // if not repesated then store value in set c
        {
            c[k] = a[i];
            k++;
        }
    }
    // copy element of set B in set C
    for (i = 0; i < n2; i++)
    {
        // check for repeted element
        for (j = 0; j < k; j++)
        {
            if (c[j] == b[i])
                break;
        }
        if (j == k) // if element is not repeted then store in set C
        {
            c[k] = b[i];
            k++;
        }
    }

    // printing of union of set A and set B
    printf(" A U B :");
    for (i = 0; i < k; i++)
        printf("%d ", c[i]);
}