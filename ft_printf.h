/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:14:24 by abnemili          #+#    #+#             */
/*   Updated: 2024/11/27 11:03:57 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>

int	ft_printf(const char *form, ...);
int	ft_puthex_low(unsigned int index);
int	ft_puthex_upp(unsigned int index);
int	ft_putnbr_unsigned(unsigned int nb);
int	ft_putchar(int c);
int	ft_putstr(char *str);
int	ft_putnbr(int nb);
int	ft_putper(unsigned long nb, int f);

#endif
