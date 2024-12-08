/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 17:18:48 by abnemili          #+#    #+#             */
/*   Updated: 2024/11/27 12:27:59 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_set(char form, va_list ar_p)
{
	int	cnt;

	cnt = 0;
	if (form == 'c')
		cnt += ft_putchar(va_arg(ar_p, int));
	else if (form == 's')
		cnt += ft_putstr(va_arg(ar_p, char *));
	else if (form == 'd' || form == 'i')
		cnt += ft_putnbr(va_arg(ar_p, int));
	else if (form == 'u')
		cnt += ft_putnbr_unsigned(va_arg(ar_p, unsigned int));
	else if (form == 'x')
		cnt += ft_puthex_low(va_arg(ar_p, unsigned int));
	else if (form == 'X')
		cnt = +ft_puthex_upp(va_arg(ar_p, unsigned int));
	else if (form == 'p')
		cnt = +ft_putper(va_arg(ar_p, unsigned long), 1);
	else if (form == '%')
		cnt += ft_putchar('%');
	else
		cnt = -1;
	return (cnt);
}

int	ft_printf(const char *form, ...)
{
	int		index;
	int		cnt;
	int		check;
	va_list	ar_p;

	index = 0;
	cnt = 0;
	va_start(ar_p, form);
	while (form[index] != '\0')
	{
		if (form[index] == '%')
		{
			check = ft_set(form[++index], ar_p);
			if (check == -1)
				return (-1);
			cnt += check;
			index++;
		}
		else
			cnt += ft_putchar(form[index++]);
	}
	va_end(ar_p);
	return (cnt);
}
