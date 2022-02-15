/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:39:16 by afonso            #+#    #+#             */
/*   Updated: 2022/02/14 08:51:23 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static	int	deci_hexa(char	*string, char format)
{
	unsigned int	i;

	i = 0;
	if (format == 'p')
		ft_putstr_fd("0x", 1);
	while (string[i])
	{
		if (string[i] < 10)
		{
			string[i] = string[i] + 48;
			i++;
		}
		if (format == 'x')
			if (string[i] >= 10)
				string[i] = string[i] + 87;
		if (format == 'X')
			if (string[i] >= 10)
				string[i] = string[i] + 55;
		i++;
	}
	ft_putstr_fd(string, 1);
	return (ft_strlen(string));
}

int	print_hexa(va_list ap, char format, int counter)
{
	char			string[13];
	unsigned int	i;
	unsigned int	strlen;
	unsigned int	x;

	if (format == 'u' || format == 'p')
	{
		if (format == 'u')
			counter += print_unsignedint(va_arg(ap, unsigned int));
		if (format == 'p')
			counter += print_pointer(va_arg(ap, unsigned int *));
		return (counter);
	}
	i = va_arg(ap, unsigned int);
	x = i;
	strlen = 0;
	while (i)
	{
		i = i / 16;
		strlen++;
	}
	i = strlen;
	while (i <= 8)
		string[i++] = '\0';
	while (x)
	{
		string[--strlen] = (char)(x % 16);
		x = x / 16;
	}
	return (deci_hexa(string, format));
}
