/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:39:13 by afonso            #+#    #+#             */
/*   Updated: 2022/02/11 14:36:34 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ft_printf.h>

int	print_integer(int i, char format)
{
	char	*s;
	int		counter;

	if (format == 'c')
	{
		ft_putchar_fd(i, 1);
		return (1);
	}
	s = ft_itoa(i);
	counter = ft_strlen(s);
	ft_putstr_fd(s, 1);
	free(s);
	return (counter);
}
