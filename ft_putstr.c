/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abnemili <abnemili@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/25 18:11:00 by abnemili          #+#    #+#             */
/*   Updated: 2024/11/27 11:09:00 by abnemili         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	index;

	index = 0;
	if (!str)
	{
		write(1, "(null)", 6);
		return (6);
	}
	while (str[index])
	{
		ft_putchar(str[index]);
		index++;
	}
	return (index);
}
