#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	int	i;
	int	c;
	int	upper;
	c = 'a';
	i = 1;
	while (i <= 26)
	{
		if (i % 2 != 0)
		{
			write(1, &c, 1);
			write(1, &c, 1);
		}
		else
		{
			upper = c - 32;
			write(1, &upper, 1);
			write(1, &upper, 1);
		}

		c++;
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
