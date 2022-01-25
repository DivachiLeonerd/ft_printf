/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 12:00:57 by afonso            #+#    #+#             */
/*   Updated: 2022/01/25 13:20:02 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ft_printf.h>

int	ft_printf(const char *format, ...)
{
	va_list	ap;

	va_start(ap, format);
	while (*format)
	{
		if (*format != '%' && format)
			ft_putchar(*format);
		format++;
		if (*format == 'c')
			print_char(va_arg(ap, const char *));
		if (*format == 'i' || *format == 'd')
			print_integer(va_arg(ap, int));
		if (*format == 'p')
			print_pointer(va_arg(ap, void *), 'p');
		if (*format == 'u')
			print_unsignedchar(va_arg(ap, unsigned int));
		if (*format == 'x' || *format == 'X')
			print_hexa(va_arg(ap, unsigned int), *format);
		if (*format == '%')
			ft_putchar('%');
		if (*format == 's')
			ft_putstr_fd(va_arg(ap, const char *), 1);
	}
	va_end(ap);
}
