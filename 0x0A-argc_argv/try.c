#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, arg, sum = 0;

    if (argc == 1)
        printf("0\n");
    else
    {
        for (i = 1; i < argc; i++)
        {
            arg = atoi(argv[i]);
            if (arg != 0 || argv[i][0] == '0')
                sum += arg;
            else
            {
                printf("Error\n");
                return (1);
            }
        }
        printf("%d\n", sum);
    }

    return (0);
}

