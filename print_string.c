/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_string.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 16:54:14 by atereso-          #+#    #+#             */
/*   Updated: 2022/03/08 16:46:18 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_string(char *string)
{
	if (!string)
	{
		return (write(1, "(null)",6));
	}
	ft_putstr_fd(string, 1);
	return (ft_strlen(string));
}
