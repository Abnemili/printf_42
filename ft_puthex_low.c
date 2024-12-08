/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_low.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:05:34 by abnemili          #+#    #+#             */
/*   Updated: 2024/11/25 19:24:33 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_low(unsigned int index)
{
	int		cnt;
	char	*hex;

	cnt = 0;
	hex = "0123456789abcdef";
	if (index < 16)
	{
		cnt += ft_putchar(hex[index]);
	}
	else
	{
		cnt += ft_puthex_low(index / 16);
		cnt += ft_putchar(hex[index % 16]);
	}
	return (cnt);
}
