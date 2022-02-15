/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:00:57 by afonso            #+#    #+#             */
/*   Updated: 2022/02/14 08:51:46 by afonso           ###   ########.fr       */
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
		counter += fmt_handler(format++, ap, counter);
	va_end(ap);
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
			if (*format == '%' || 's')
			{
				if (*format == '%')
					ft_putchar_fd('%', 1);
				if (*format == 's')
					ft_putstr_fd(va_arg(ap, char *), 1);
				counter++;
			}
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
