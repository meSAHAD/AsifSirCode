/*
->given the truth value of the proposition p and q, find the truth value of
1, exclusive or
2, conditional statement
3, biconditional of these propositions
if number of input = 2
then
p  q
0  0
0  1
1  0
1  1
*/
#include <stdio.h>

int xor, con, bicon;

void exclusive()
{
    printf("p\tq\tXOR\n");
    for (int i = 0; i < 30; i++)
        printf("-");
    printf("\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            printf("%d\t%d\t%d\n", i, j, !(i == j));
    printf("\n");
}

void conditional()
{
    printf("p\tq\tConditional\n");
    for (int i = 0; i < 30; i++)
        printf("-");
    printf("\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            printf("%d\t%d\t%d\n", i, j, !(i && !j));
    printf("\n");
}

void biconditional()
{

    printf("p\tq\tBiconditional\n");
    for (int i = 0; i < 30; i++)
        printf("-");
    printf("\n");
    for (int i = 0; i < 2; i++)
        for (int j = 0; j < 2; j++)
            printf("%d\t%d\t%d\n", i, j, (i == j));
    printf("\n");
}

int main()
{

    exclusive();
    conditional();
    biconditional();
}
