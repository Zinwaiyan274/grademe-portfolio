#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char	c;

	if (argc != 2)
	{
		write(1, "wrong number of arguments\n", 26);
		return (0);
	}
	i = 0;
	while (argv[1][i] != '\0')
	{
		c = argv[1][i];
		if (c >= 'a' && c <= 'z')
		{
			if (c > 'm')
				c -= 13;
			else
				c += 13;
		}
		else if (c >= 'A' && c <= 'Z')
		{
			if (c > 'M')
				c -= 13;
			else
				c += 13;
		}
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}