/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 06:41:46 by hounajar          #+#    #+#             */
/*   Updated: 2024/12/07 10:45:50 by hounajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	void	conversions(char format, va_list args)
{
	if (format == 'c')
		ft_putchar(va_arg(args, int));
	else if (format == 's')
		ft_putstr(va_arg(args, char *));
	else if (format == 'i' || format == 'd')
		ft_putnbr(va_arg(args, int));
	else if (format == 'p')
		ft_putaddr(va_arg(args, void *));
	else if (format == 'u')
		ft_putunbr(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		ft_ithex(va_arg(args, int), format);
	else if (format == '%')
		ft_putchar('%');
}

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			conversions(*format, args);
		}
		else
			ft_putchar(*format);
		format++;
	}
	va_end(args);
	return (1);
}
