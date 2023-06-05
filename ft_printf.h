/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: djin <djin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/02 14:15:17 by djin              #+#    #+#             */
/*   Updated: 2023/06/06 00:41:36 by djin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <limits.h>
# include <unistd.h>
# include <string.h>
# include <stdlib.h>
# include <stdbool.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
void	print_ptr(unsigned long int n, int *len);
void	print_hex(unsigned long int n, int *len);
void	print_hex_upper(unsigned long int n, int *len);
void	ft_put_char(char c, int *len);
void	ft_put_str(char *str, int *len);
void	print_unsigned(unsigned long n, int *len);
void	put_nbr(long n, int *len);

#endif