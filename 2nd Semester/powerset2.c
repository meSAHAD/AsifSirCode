#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
// Function to print all the power set
void printPowerSet(char set[], int n)
{
    bool *contain = calloc(n, sizeof(bool));

    // Empty subset
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        contain[i] = true;
        // All permutation
        do
        {
            for (int j = 0; j < n; j++)
            {
                if (contain[j])
                {
                    printf("%c", set[j]);
                }
            }
            printf("\n");
        } while (prev_permutation(contain, contain + n));
    }
    free(contain);
}

/*Driver code*/
int main()
{
    char set[] = {'a', 'b', 'c'};
    printPowerSet(set, 3);
    return 0;
}
