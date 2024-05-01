#include <stdio.h>
int n;

void exclusiveor()
{
    for (char ch = 'p'; ch < 'p' + n; ch++)
        printf("%c\t", ch);
    printf("XOR\n");
    for (int i = 0; i < 9 * n; i++)
        printf("-");
    printf("\n");

    for (int i = 0; i < (1 << n); i++)
    {
        int xorV;
        for (int j = n - 1; j >= 0; j--)
        {
            int bit = i & (1 << j);
            if (bit)
                bit = 1;

            printf("%d\t", bit);
            if (j == n - 1)
                xorV = bit;
            else
                xorV = !(xorV == bit);
        }
        printf("%d\n", xorV);
    }
    printf("\n");
}

void conditional()
{
    for (char ch = 'p'; ch < 'p' + n; ch++)
        printf("%c\t", ch);
    printf("Conditional\n");
    for (int i = 0; i < 11 * n; i++)
        printf("-");
    printf("\n");

    for (int i = 0; i < (1 << n); i++)
    {
        int con;
        for (int j = n - 1; j >= 0; j--)
        {
            int bit = i & (1 << j);
            if (bit)
                bit = 1;

            printf("%d\t", bit);
            if (j == n - 1)
                con = bit;
            else
                con = !(con && !bit);
        }

        printf("%d\n", con);
    }
    printf("\n");
}

void biconditional()
{
    for (char ch = 'p'; ch < 'p' + n; ch++)
        printf("%c\t", ch);
    printf("Biconditional\n");
    for (int i = 0; i < 11 * n; i++)
        printf("-");
    printf("\n");

    for (int i = 0; i < (1 << n); i++)
    {
        int bicon;
        for (int j = n - 1; j >= 0; j--)
        {
            int bit = i & (1 << j);
            if (bit)
                bit = 1;

            printf("%d\t", bit);
            if (j == n - 1)
                bicon = bit;
            else
                bicon = (bicon == bit);
        }
        printf("%d\n", bicon);
    }
    printf("\n");
}

int main()
{
    scanf("%d", &n);

    exclusiveor();
    conditional();
    biconditional();

    return 0;
}
