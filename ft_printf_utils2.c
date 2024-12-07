/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 06:41:54 by hounajar          #+#    #+#             */
/*   Updated: 2024/12/07 10:32:39 by hounajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putunbr(unsigned int nb)
{
	if (nb < 10)
		ft_putchar(nb + '0');
	else
	{
		ft_putunbr(nb / 10);
		ft_putunbr(nb % 10);
	}
}

void	ft_ithex(unsigned long nb, char conversion)
{
	char	*hex;

	if (conversion == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (nb >= 16)
		ft_ithex(nb / 16, conversion);
	ft_putchar(hex[nb % 16]);
}

void	ft_putaddr(void *pt)
{
	if (!pt)
	{
		ft_putstr("(nil)");
		return ;
	}
	ft_putstr("0x");
	ft_ithex((unsigned long)(pt), 'x');
}
