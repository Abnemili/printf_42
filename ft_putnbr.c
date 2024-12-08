/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:11:10 by abnemili          #+#    #+#             */
/*   Updated: 2024/11/25 19:05:24 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int nb)
{
	int	cnt;

	cnt = 0;
	if (nb == -2147483648)
	{
		cnt += ft_putstr("-2147483648");
	}
	else
	{
		if (nb < 0)
		{
			cnt += ft_putchar('-');
			nb = -nb;
		}
		if (nb >= 10)
		{
			cnt += ft_putnbr(nb / 10);
		}
		cnt += ft_putchar((nb % 10) + 48);
	}
	return (cnt);
}
