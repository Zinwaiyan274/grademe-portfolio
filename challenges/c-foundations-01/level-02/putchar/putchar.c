#include <unistd.h>

int	putchar(int c)
{
	unsigned char a = c;
	write(1, &a, 1);
	return a;
}
