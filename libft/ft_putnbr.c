#include "libft.h"

void	ft_putchar(char c) //to dell
{
	write(1, &c, 1);
}

void    ft_putstr(char const *s) // to dell
{
	        size_t i;

		        i = 0;
			        while (s[i] != '\0')
					        {
							                ft_putchar(s[i]);
									                i++;
											        }
}

void	ft_putnbr(int n)
{
	if (n == -2147483648)
	{
		ft_putstr("-2147483648");
	}
	else if (n < 0)
	{
		ft_putchar('-');
		ft_putnbr(-n);
	}
	else if (n >= 10)
	{
			ft_putnbr(n / 10);
			ft_putchar(n % 10 + '0');
	}
	else
		ft_putchar(n + '0');
}

int	main()
{
	int i = -488888542;
	ft_putnbr(i);
	return (0);
}
