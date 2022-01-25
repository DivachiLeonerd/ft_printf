/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:00:57 by afonso            #+#    #+#             */
/*   Updated: 2022/01/25 17:13:09 by atereso-         ###   ########.fr       */
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
		while (*(format++) != '%')
			ft_putchar_fd(*(format - 1), 1);
		if (*format == 'c' )
			ft_putchar_fd(va_arg(ap, int), 1);
		if (*format == 'i' || *format == 'd')
			print_integer(va_arg(ap, int));
		if (*format == 'u')
			print_unsignedchar(va_arg(ap, unsigned int));
		if (*format == 'x' || *format == 'X' || *format == 'p')
			print_hexa(va_arg(ap, unsigned int), *format);
		if (*format == '%')
			ft_putchar_fd('%', 1);
		if (*format == 's' || (format++ && *(format - 1) == 's'))
			ft_putstr_fd(va_arg(ap, char *), 1);
		counter++;
	}
	va_end(ap);
	return (counter);
}
