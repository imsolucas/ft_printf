/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 00:05:51 by djin              #+#    #+#             */
/*   Updated: 2023/06/06 00:41:16 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	printf_checker(char c, va_list *ap, int *len)
{
	if (c == 'c')
		ft_put_char(va_arg(*ap, int), len);
	else if (c == 's')
		ft_put_str(va_arg(*ap, char *), len);
	else if (c == 'p')
		print_ptr(va_arg(*ap, unsigned long int), len);
	else if (c == 'd')
		put_nbr(va_arg(*ap, long), len);
	else if (c == 'i')
		put_nbr(va_arg(*ap, int), len);
	else if (c == 'u')
		print_unsigned(va_arg(*ap, unsigned long), len);
	else if (c == 'x')
		print_hex(va_arg(*ap, unsigned int), len);
	else if (c == 'X')
		print_hex_upper(va_arg(*ap, unsigned int), len);
	else if (c == '%')
		ft_put_char('%', len);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		i;
	int		len;

	i = 0;
	len = 0;
	va_start(ap, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			printf_checker(str[i], &ap, &len);
		}
		else
			ft_put_char(*str, &len);
		i++;
	}
	va_end(ap);
	return (len);
}
