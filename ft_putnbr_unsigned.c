/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 13:40:25 by abnemili          #+#    #+#             */
/*   Updated: 2024/11/26 13:40:26 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_unsigned(unsigned int nb)
{
	int	cnt;

	cnt = 0;
	if (nb >= 10)
		cnt += ft_putnbr_unsigned(nb / 10);
	cnt += ft_putchar((nb % 10) + '0');
	return (cnt);
}
