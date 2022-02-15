/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsignedchar.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:38:51 by afonso            #+#    #+#             */
/*   Updated: 2022/02/14 08:48:12 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ft_printf.h>

int	print_unsignedint(unsigned int u)
{
	char	*s;
	int		counter;

	s = ft_itoa(u);
	counter = ft_strlen(s);
	ft_putstr_fd(s, 1);
	free(s);
	return (counter);
}
