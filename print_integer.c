/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_integer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:39:13 by afonso            #+#    #+#             */
/*   Updated: 2022/02/01 18:43:36 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ft_printf.h>

void	print_integer(int i, int format)
{
	char	*s;

	if (format == 'c')
	{
		ft_putchar_fd(i, 1);
		return ;
	}
	s = ft_itoa(i);
	ft_putstr_fd(s, 1);
	free(s);
}
