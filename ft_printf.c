/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:00:57 by afonso            #+#    #+#             */
/*   Updated: 2022/02/24 17:36:22 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static int	fmt_handler(const char *format, va_list ap, int counter);

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		counter;

	counter = 0;
	va_start(ap, format);
		counter += fmt_handler(format, ap, counter);
	va_end(ap);
	return (counter);
}

static	int	chr_string_handler(va_list ap, char format)
{
	int	counter;

	counter = 0;
	if (format == '%')
		ft_putchar_fd('%', 1);
	else if (format == 's')
		counter += print_string(va_arg(ap, char *)) - 1;
	counter++;
	return (counter);
}

static	int	fmt_handler(const char *format, va_list ap, int counter)
{
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			if (*format == 'p' || *format == 'x'
				||*format == 'X' || *format == 'u')
				counter += print_hexa(ap, *format, 0);
			if (*format == 'd' || *format == 'i' || *format == 'c')
				counter += print_integer(va_arg(ap, int), *format);
			if (*format == '%' || *format == 's')
				counter += chr_string_handler(ap, *format);
		}
		else
		{
			ft_putchar_fd(*format, 1);
			counter++;
		}
		format++;
	}
	return (counter);
}
