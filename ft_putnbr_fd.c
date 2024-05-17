#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	long	c;

	c = (long)n;
	if (c < 0)
	{
		ft_putchar_fd('-', fd);
		c = -c;
	}
	if (c >= 10)
	{
		ft_putnbr_fd((c / 10), fd);
		ft_putnbr_fd((c % 10), fd);
	}
	else if (c <= 9)
	{
		ft_putchar_fd((c + 48), fd);
	}
}

/*#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2)
		ft_putnbr_fd(atoi(av[1]), 1);
	return (0);
}
*/

/*int		main(int argc, const char *argv[])
{
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
		ft_putnbr_fd(0, 2);
	else if (arg == 2)
		ft_putnbr_fd(5, 1);
	else if (arg == 3)
		ft_putnbr_fd(-5, 2);
	else if (arg == 4)
		ft_putnbr_fd(42, 1);
	else if (arg == 5)
		ft_putnbr_fd(-57, 2);
	else if (arg == 6)
		ft_putnbr_fd(164189, 1);
	else if (arg == 7)
		ft_putnbr_fd(-987441, 2);
	else if (arg == 8)
		ft_putnbr_fd(2147483647, 1);
	else if (arg == 9)
		ft_putnbr_fd(-2147483648LL, 2);
	return (0);
}*/