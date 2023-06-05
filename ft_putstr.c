/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/03 14:50:12 by djin              #+#    #+#             */
/*   Updated: 2023/06/06 00:58:04 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		++i;
	return (i);
}

void	ft_put_char(char c, int *len)
{
	write (1, &c, 1);
	*len += 1;
}

void	ft_put_str(char *str, int *len)
{
	if (!str)
	{
		write (1, "(null)", 6);
		*len += 6;
		return ;
	}
	while (*str)
	{
		len += write(1, &*str++, 1);
	}
}
