/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:39:16 by afonso            #+#    #+#             */
/*   Updated: 2022/01/25 17:35:02 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

static	char	*deci_hexa(unsigned int x)
{
	unsigned int	quotient;
	char			*s;
	unsigned int	strlen;

	quotient = x;
	strlen = 0;
	if (!x)
		strlen++;
	while (quotient)
	{
		quotient = quotient / 16;
		strlen++;
	}
	s = malloc((strlen + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s[strlen] = '\0';
	while (strlen)
	{
		s[--strlen] = x % 16;
		x = x / 16;
	}
	return (s);
}

void	print_hexa(unsigned int x, char format)
{
	char			*s;
	unsigned int	i;

	i = 0;
	s = deci_hexa(x);
	while (s[i])
	{
		if (s[i] < 10)
			ft_putchar_fd(s[i], 1);
		if (format == 'x')
			ft_putchar_fd(s[i] += 87, 1);
		if (format == 'X')
			ft_putchar_fd(s[i] += 55, 1);
		if (format == 'p')
		{
			ft_putstr_fd("0x", 1);
			ft_putchar_fd(s[i] += 87, 1);
		}
	}
	ft_putchar_fd('\n', 1);
	free(s);
}
