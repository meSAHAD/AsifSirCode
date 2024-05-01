/*find the power set of a given set a
sample input
A={1,2}
output
|P(A)|=4
Subset of A =m{},{1},{2},{1,2}*/

#include <stdio.h>
#include <math.h>

void printPowerSet(int set[], int size)
{
    int powerSetSize = pow(2, size);

    // Run a loop for counter from 0 to 2^size
    for (int counter = 0; counter < powerSetSize; counter++)
    {
        printf("{");
        for (int j = 0; j < size; j++)
        {
            // Check if jth bit in the counter is set. If set, print jth element from set
            if (counter & (1 << j))
                printf("%d ", set[j]);
        }
        printf("}, ");
    }
}

int main()
{
    int set[10], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &set[i]);

    int k = pow(2, n);
    printf("|P(A)|: %d \n", k);

    printf("Subset of A ={ ");
    printPowerSet(set, n);
    printf("}");

    return 0;
}
