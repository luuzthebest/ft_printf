/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 06:41:59 by hounajar          #+#    #+#             */
/*   Updated: 2024/12/07 10:46:54 by hounajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *format, ...);
void	ft_putstr(char *s);
void	ft_putnbr(int n);
void	ft_putchar(char c);
void	ft_putunbr(unsigned int n);
void	ft_ithex(unsigned long nb, char conversion);
void	ft_putaddr(void *pt);

#endif
