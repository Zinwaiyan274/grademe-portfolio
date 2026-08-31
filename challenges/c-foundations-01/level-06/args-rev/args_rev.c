#include <unistd.h>

int	ft_strlen(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
		i++;
	return (i);
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	str_len;

	i = argc - 1;
	while (i >= 1)
	{
		j = 0;
		str_len = ft_strlen(argv[i]);
		while (j < str_len)
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}