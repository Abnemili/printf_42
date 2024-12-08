/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putper.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:48:08 by abnemili          #+#    #+#             */
/*   Updated: 2024/11/26 17:28:55 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putper(unsigned long nb, int f)
{
	int		cnt;
	char	*hex;

	cnt = 0;
	hex = "0123456789abcdef";
	if (nb == 0)
		return (ft_putstr("(nil)"));
	if (f)
		cnt += ft_putstr("0x");
	if (nb < 16)
		cnt += ft_putchar(hex[nb]);
	else
	{
		cnt += ft_putper((nb / 16), 0);
		cnt += ft_putchar(hex[nb % 16]);
	}
	return (cnt);
}
