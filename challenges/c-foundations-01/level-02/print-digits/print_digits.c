#include <unistd.h>

void print_digits(void)
{
    int index = '0';

    while (index <= '9')
    {
        write(1, &index, 1);
        index++;
    }
}
