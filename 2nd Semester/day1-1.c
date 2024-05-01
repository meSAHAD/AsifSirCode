/*write a program to read two sets from file and perform the following
1, union
2, intersection
input
A={1,2}
B={2,3}
output
aUb ={1,2,3}
a int b = {2}
*/

#include <stdio.h>

void readSet(int set[], int size)
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &set[i]);
    }
}

void calculateUnion(int setA[], int sizeA, int setB[], int sizeB, int setC[], int *sizeC)
{
    int k = 0;

    // Copy elements of set A to set C
    for (int i = 0; i < sizeA; i++)
    {
        int repeated = 0;

        for (int j = 0; j < k; j++)
        {
            if (setC[j] == setA[i])
            {
                repeated = 1;
                break;
            }
        }

        if (!repeated)
        {
            setC[k] = setA[i];
            k++;
        }
    }

    // Copy elements of set B to set C
    for (int i = 0; i < sizeB; i++)
    {
        int repeated = 0;

        for (int j = 0; j < k; j++)
        {
            if (setC[j] == setB[i])
            {
                repeated = 1;
                break;
            }
        }

        if (!repeated)
        {
            setC[k] = setB[i];
            k++;
        }
    }

    printf("A U B: ");
    for (int i = 0; i < k; i++)
    {
        printf("%d ", setC[i]);
    }
    printf("\n");
}

void intersection(int setA[], int setB[], int sizeA, int sizeB)
{
    int setC[20], sizeC = 0;

    for (int i = 0; i < sizeA; i++)
    {
        for (int j = 0; j < sizeB; j++)
        {
            if (setA[i] == setB[j])
            {
                setC[sizeC] = setA[i];
                sizeC++;
                break;
            }
        }
    }

    printf("A Intersection B: ");
    for (int i = 0; i < sizeC; i++)
    {
        printf("%d ", setC[i]);
    }
    printf("\n");
}

void printSet(int set[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d ", set[i]);
    }
    printf("\n");
}

int main()
{
    int setA[10], setB[10], setC[20], sizeA, sizeB, sizeC;
    scanf("%d", &sizeA);
    readSet(setA, sizeA);
    scanf("%d", &sizeB);
    readSet(setB, sizeB);

    calculateUnion(setA, sizeA, setB, sizeB, setC, &sizeC);
    intersection(setA, setB, sizeA, sizeB);

    return 0;
}
