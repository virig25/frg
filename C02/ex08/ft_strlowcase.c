#include <unistd.h>

char *ft_strupcase(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
        i++;
    }
    return (str);
}

int main(void)
{
    char str[] = "bjknjnNEWNF";
    ft_strupcase(str);
    write(1, str, 11);
    return (0);
}
