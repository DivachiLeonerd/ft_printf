/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsignedchar.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/11 17:38:51 by afonso            #+#    #+#             */
/*   Updated: 2022/01/25 13:05:17 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<ft_printf.h>

void	print_unsignedchar(unsigned int u)
{
	char	*s;

	s = ft_itoa(u);
	ft_putstr_fd(s, 1);
	free(s);
}
