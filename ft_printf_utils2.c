/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 06:41:54 by hounajar          #+#    #+#             */
/*   Updated: 2024/12/07 12:43:57 by hounajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putunbr(unsigned int nb, int *len)
{
	if (nb < 10)
		ft_putchar(nb + '0', len);
	else
	{
		ft_putunbr(nb / 10, len);
		ft_putunbr(nb % 10, len);
	}
}

void	ft_ithex(unsigned long nb, char conversion, int *len)
{
	char	*hex;

	if (conversion == 'x')
		hex = "0123456789abcdef";
	else
		hex = "0123456789ABCDEF";
	if (nb >= 16)
		ft_ithex(nb / 16, conversion, len);
	ft_putchar(hex[nb % 16], len);
}

void	ft_putaddr(void *pt, int *len)
{
	if (!pt)
	{
		ft_putstr("(nil)", len);
		return ;
	}
	ft_putstr("0x", len);
	ft_ithex((unsigned long)(pt), 'x', len);
}
