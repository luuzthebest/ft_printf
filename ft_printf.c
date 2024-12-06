/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 06:41:46 by hounajar          #+#    #+#             */
/*   Updated: 2024/12/01 06:41:47 by hounajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

int	ft_printf(const char *format, ...)
{
	va_list args;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 's')
			{
				ft_putstr(args);
				va_arg(args, char *);
			}
			else if (*format == 'i')
			{
				ft_putnbr((int)*args);
				va_arg(args, int);
			}
		}
		format++;
	}
	va_end(args);
	return 1;
}
int main(){
	char *hello = "hello world";
	ft_printf("%s", hello);
