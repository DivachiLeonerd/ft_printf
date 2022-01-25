/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:00:57 by afonso            #+#    #+#             */
/*   Updated: 2022/01/24 17:51:15 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdarg.h>
#include"ft_printf.h"

int	ft_printf(const char *format, ...)
{
	va_list	ap;

	va_start(ap, format);
	while (*format++)
	{
		while (*format != '%' && format)
		{
			ft_putchar(*format);
			format++;
		}
		format++;
		if (*format == 'c')
			print_char(va_arg(ap, int));
		if (*format == 'i' || *format == 'd')
			print_integer(va_arg(ap, int));
		if (*format == 'p')
			print_pointer(va_arg(ap, void *), 'p');
		if (*format == 'u')
			print_unsignedchar(va_arg(ap, unsigned int));
		if (*format == 'x' || *format == 'X')
			print_hexa(va_arg(ap, int), *format);
		if (*format == '%')
			ft_putchar('%');
	}
	va_end(ap);
}
