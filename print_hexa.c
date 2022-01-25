/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:39:16 by afonso            #+#    #+#             */
/*   Updated: 2022/01/25 13:05:51 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ft_printf.h>

static	char	*deci_hexa(unsigned int i)
{
	unsigned int	quotient;
	char			*s;
	unsigned int	strlen;

	quotient = i;
	strlen = 0;
	if (!i)
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
	s = &s[strlen - 1];
	while (i % 16)
	{
		*(s--) = i % 16;
		i = i / 16;
	}
	return (s);
}

void	print_hexa(unsigned int x, char format)
{
	char			*s;
	unsigned int	i;

	i = 0;
	s = deci_hexa(i);
	while (s[i])
	{
		if (s[i] < 10)
			ft_putchar(s[i]);
		if (format == 'x')
			ft_putchar(s[i] += 87);
		if (format == 'X')
			ft_putchar(s[i] += 55);
		if (format == 'p')
		{
			ft_putstr_fd("0x", 1);
			ft_putchar(s[i] += 87);
		}
	}
	ft_putchar('\n');
	free(s);
}
