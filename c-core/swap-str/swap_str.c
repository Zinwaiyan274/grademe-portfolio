#include <stddef.h>

// Exchange the pointer stored in *a with the one stored in *b.
// Nothing happens when a or b is NULL.
void	swap_str(char **a, char **b)
{

	char *temp;

	if (a == NULL || b == NULL)
		return;

	temp = *a; 
	*a = *b;
	*b = temp;
}
