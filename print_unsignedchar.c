/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsignedchar.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:38:51 by afonso            #+#    #+#             */
/*   Updated: 2022/02/24 18:45:05 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ft_printf.h>

int	print_unsignedint(unsigned int u)
{
	char	*s;
	int		counter;

	if (u == UINT32_MAX)
	{
		ft_putstr_fd("4294967295", 1);
		return (10);
	}
	s = ft_itoa(u);
	counter = ft_strlen(s);
	ft_putstr_fd(s, 1);
	free(s);
	return (counter);
}
