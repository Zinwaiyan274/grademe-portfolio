#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char nine;

	nine = '9';
	while (nine >= '0')
	{
		write(1, &nine, 1);
		nine--;
	}
	write(1, "\n", 1);

	return (0);
}
