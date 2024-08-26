#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Process
{
    char id[10];
    int b_t;
    int ar_t;
    int w_t;
    int tr_t;
    int ext_t;
};

int main()
{
    FILE *file;
    struct Process ps[100];
    int count = 0;
    char line[100];
    file = fopen("input.txt", "r");

    if (file == NULL)
    {
        printf("Could not open file\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL)
    {
        sscanf(line, "%s %d %d", ps[count].id, &ps[count].b_t, &ps[count].ar_t);
        count++;
    }
    fclose(file);

    //  waiting time
    ps[0].w_t = 0;

    for (int i = 1; i < count; i++)
    {
        ps[i].w_t = ps[i - 1].w_t + ps[i - 1].b_t;
    }

    //  turnaround time and exit time
    for (int i = 0; i < count; i++)
    {
        ps[i].tr_t = ps[i].w_t + ps[i].b_t;
        ps[i].ext_t = ps[i].ar_t + ps[i].tr_t;
    }

    printf("Process\tBurst Time\tExit Time\tWaiting Time\tTurnaround Time\n");
    for (int i = 0; i < count; i++)
    {
        printf("%s\t%d\t\t%d\t\t%d\t\t%d\n", ps[i].id, ps[i].b_t, ps[i].ext_t, ps[i].w_t, ps[i].tr_t);
    }

    return 0;
}
