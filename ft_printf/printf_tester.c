/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:49:44 by afonso            #+#    #+#             */
/*   Updated: 2022/01/24 18:01:16 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int	main(void)
{
	int 		decimal = 10;
	int 		integer = 10;
	unsigned int u = 1000000;
	unsigned int hexalow = 48600;
	unsigned int hexaupp = 48600;
	void		*ptr = decimal;
	char		c = 'F';

	//printf("%d %i %u %x %X %p %% %c \n", decimal, integer, u ,hexalow, hexaupp, ptr, c);
	//ft_printf("%d %i %u %x %X %p %% %c \n", decimal, integer, u ,hexalow, hexaupp, ptr, c);
}
