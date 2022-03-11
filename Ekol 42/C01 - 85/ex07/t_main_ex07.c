#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab();

int	main()
{
	int	int1[] = {5, 4, 2, 3, 1, 0};
	int size = 6;

	ft_rev_int_tab(int1, size);
	printf("%d", int1[3]);	
	return 0;
}
