/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:00:57 by afonso            #+#    #+#             */
/*   Updated: 2022/02/01 18:45:02 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		counter;

	counter = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'p' || *format == 'x'
				||*format == 'X' || *format == 'u')
				print_hexa(va_arg(ap, unsigned int), *format);
			if (*format == 'd' || *format == 'i' || *format == 'c')
				print_integer(va_arg(ap, int), *format);
			if (*format == '%')
				ft_putchar_fd('%', 1);
			if (*format == 's')
				ft_putstr_fd(va_arg(ap, char *), 1);
			ft_putchar_fd(' ', 1);
		}
		format++;
	}
	va_end(ap);
	return (counter);
}
