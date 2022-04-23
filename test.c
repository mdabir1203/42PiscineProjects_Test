#include <unistd.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;

    i = 0;
    while (s1[i] != '\0' || s2[i] != '\0')
    {
        if (s1[i] < s2[i])
        {
            return -1;
        }
        else if (s1[i] > s2[i])
        {
            return 1;
        }
        i++;
    }
    return 0;
}

int ft_strlen(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main(int argc, char *argv[])
{
    char temp;
    int i;
    int j;
    int flag;

    flag = 0;

    i = 1;
    j = 1;
    while (j < argc)
    {
        while (i < argc - j - 1)
        {   
            if (ft_strcmp (argv[i], argv[i + 1]) == 1)
            if (argv[i] > argv[i + 1])
            {
                temp = *argv[i];
                argv[i] = argv[i + 1];
                *argv[i + 1] = temp;
                flag = 1;
            }
            i++;
        }
        if (flag == 0)
            break;
        j++;
    }

    int k = 1;
    while (k < argc)
    {
        printf("%s\n", argv[k]);
        // write(1, argv[k],sizeof(argc)/sizeof(int));
        // write(1, "\n", 1);
        k++;
    }
}