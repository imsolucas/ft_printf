/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 17:50:29 by djin              #+#    #+#             */
/*   Updated: 2023/06/06 00:42:29 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	put_nbr(long n, int *len)
{
	if (n == -2147483648)
	{
		write(1, "-2147483648", 11);
		*len += 11;
	}
	else if (n <= 0)
	{
		write(1, "-", 1);
		n *= -1;
	}
	else if (n >= 10)
	{
		put_nbr(n / 10, len);
		put_nbr(n % 10, len);
	}
	else
	{
		n += 0;
		len += write (1, &n, 1);
	}
}

void	print_unsigned(unsigned long n, int *len)
{
	if (n >= 10)
	{
		put_nbr(n / 10, len);
		put_nbr(n % 10, len);
	}
	else
	{
		n += 0;
		write (1, &n, 1);
		*len += 1;
	}
}
