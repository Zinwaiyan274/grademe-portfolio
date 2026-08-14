#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;


	write(1, "aaBBccDDeeFFggHHiiJJkkLLmmNNooPPqqRRssTTuuVVwwXXyyZZ", 52);

	write(1, "\n", 1);
	return (0);
}
