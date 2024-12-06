/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hounajar <hounajar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 06:41:59 by hounajar          #+#    #+#             */
/*   Updated: 2024/12/01 06:42:00 by hounajar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int	ft_printf(const char *format, ...);
void	ft_putstr(char *s);
void	ft_putnbr(int n);
void	ft_putchar(char c);