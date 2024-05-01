#include <stdio.h>
#include <conio.h>
void main()
{
    //system("cls");
    int i, j,n, temp = 0, a[10], b[10], r[10]; // a and b=input sets r=resultant set
    scanf("%d",&n);
    printf("Enter first set :-\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter second set :-\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &b[i]);
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (a[i] == b[j])
            {
                r[temp] = a[i]; /* If i make a printf here and print the elements directly here and here then it works but storing it in a third array gives me a garbage value when printed */
                temp++;
                break;
            }
        }
    }
    printf("Resultant array is ");
    for (i = 0; i < temp; i++)
    {
        printf("%d ", r[i]); // Always only 2 garbage values would be printed
    }
}