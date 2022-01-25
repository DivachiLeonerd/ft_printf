/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:49:44 by afonso            #+#    #+#             */
/*   Updated: 2022/01/25 17:15:00 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	main(void)
{
	int				decimal = 10;
	int				integer = 10;
	unsigned int	u = 1000000;
	unsigned int	hexalow = 48600;
	unsigned int	hexaupp = 48600;
	void			*ptr = &decimal;
	char			c = 'F';
	char			*string = " HELLO world ";

	printf("O printf normal:\n");
	printf("%d %i %u %s %x %X %p %% %c \n", decimal, integer, u , string, hexalow, hexaupp, ptr, c);
	printf("Agora o meu:\n");
	ft_printf("%d %i %u %s %x %X %p %% %c \n", decimal, integer, u ,string, hexalow, hexaupp, ptr, c);
}
