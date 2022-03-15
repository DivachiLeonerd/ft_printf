/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:39:16 by afonso            #+#    #+#             */
/*   Updated: 2022/03/15 20:27:43 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static	int	deci_hexa(char	*string, char format)
{
	unsigned int	i;

	i = 0;
	if (string[i] == 48)
	{
		ft_putstr_fd("0", 1);
		return (1);
	}
	while (string[i])
	{
		while (string[i] < 10 && string[i])
		{
			string[i] = string[i] + 48;
			i++;
		}
		if (format == 'x' && string[i] != 48)
			if (string[i] >= 10)
				string[i] = string[i] + 87;
		if (format == 'X' && string[i] != 48)
			if (string[i] >= 10)
				string[i] = string[i] + 55;
		i++;
	}
	ft_putstr_fd(string, 1);
	return (ft_strlen(string));
}

static	int	ft_handler(va_list ap, char format, int counter)
{
	if (format == 'u' || format == 'p')
	{
		if (format == 'u')
			counter += print_unsigned_int(va_arg(ap, unsigned int));
		if (format == 'p')
			counter += print_pointer(va_arg(ap, unsigned int *));
		return (counter);
	}
	return (0);
}

static	void	array_builder(char *string, size_t i, size_t strlen, size_t x)
{
	while (i <= 8)
		string[i++] = '\0';
	while (x)
	{
		string[--strlen] = (char)(x % 16);
		if (string[strlen] == 0)
			string[strlen] += 48;
		x = x / 16;
	}
}

int	print_hexa(va_list ap, char format, int counter)
{
	char			string[9];
	unsigned int	i;
	unsigned int	strlen;
	unsigned int	x;

	if (format == 'u' || format == 'p')
		return (counter += ft_handler(ap, format, counter));
	i = va_arg(ap, unsigned int);
	if (!i)
		return (deci_hexa("0", format));
	x = i;
	strlen = 0;
	while (i)
	{
		i = i / 16;
		strlen++;
	}
	i = strlen;
	array_builder(string, i, strlen, x);
	return (deci_hexa(string, format));
}
