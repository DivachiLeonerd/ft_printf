/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:39:16 by afonso            #+#    #+#             */
/*   Updated: 2022/02/01 19:05:32 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static	void	print_unsignedchar(unsigned int u)
{
	char	*s;

	s = ft_itoa(u);
	ft_putstr_fd(s, 1);
	free(s);
}

static	void	deci_hexa(char	*string, char format)
{
	unsigned int	i;

	i = 0;
	if (format == 'p')
		ft_putstr_fd("0x", 1);
	while (string[i])
	{
		if (string[i] < 10)
			string[i] = string[i] + 48;
		if (format == 'p' || format == 'x')
			if (string[i] >= 10)
				string[i] = string[i] + 87;
		if (format == 'X')
			if (string[i] >= 10)
				string[i] = string[i] + 55;
		i++;
	}
	ft_putstr_fd(string, 1);
}

void	print_hexa(unsigned int x, char format)
{
	char			string[9];
	unsigned int	i;
	unsigned int	strlen;

	if (format == 'u')
	{
		print_unsignedchar(x);
		return ;
	}
	i = x;
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
	deci_hexa(string, format);
}
