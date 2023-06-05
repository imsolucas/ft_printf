int	ft_printf(const char *str, ...);

#include	<stdio.h>

int main()
{
	char	*ptr;

	ptr = "Hello";
	printf("ft_printf: %d\n", ft_printf("Hello %c, %s, %d, %i, %u, %x, %X, %p, %%", 'a', "COLDPLAY", 5088, 42, 48, 6088, 6088, ptr, 10));
	// printf("printf: %d\n", printf("Hello %c %s %d %i %u %x %X %p %%", 'a', "COLDPLAY", 5088, 42, 48, 6088, 6088, ptr, "%"));
	return (0);
}