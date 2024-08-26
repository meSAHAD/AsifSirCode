#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Process
{
    char id[10];
    int value1;
    int value2;
};

int main()
{
    FILE *file;
    struct Process p;
    char line[100];
    file = fopen("input.txt", "r");

    if (file == NULL)
    {
        printf("Could not open file\n");
        return 1;
    }

    while (fgets(line, sizeof(line), file) != NULL)
    {
        sscanf(line, "%s %d %d", p.id, &p.value1, &p.value2);
        printf("%s %d %d\n", p.id, p.value1, p.value2);
    }
    fclose(file);

    return 0;
}
