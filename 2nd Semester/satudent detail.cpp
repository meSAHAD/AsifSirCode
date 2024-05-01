#include <stdio.h>

struct Student
{
    char id[10];
    char name[20];
    char dept[50];
};

int main()
{
    

    int N;

    scanf("%d", &N);

    struct Student info[N];

    for (int i = 0; i < N; i++)
        scanf("%s %s %s", info[i].id, &info[i].name, &info[i].dept);

    for (int i = 0; i < N; i++)
        printf("%s %s %s\n", info[i].id, info[i].name, info[i].dept);

    return 0;
}
