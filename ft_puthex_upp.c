/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex_upp.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 19:16:56 by abnemili          #+#    #+#             */
/*   Updated: 2024/11/25 19:25:06 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex_upp(unsigned int index)
{
	int		cnt;
	char	*hex;

	cnt = 0;
	hex = "0123456789ABCDEF";
	if (index < 16)
	{
		cnt += ft_putchar(hex[index]);
	}
	else
	{
		cnt += ft_puthex_upp(index / 16);
		cnt += ft_putchar(hex[index % 16]);
	}
	return (cnt);
}
