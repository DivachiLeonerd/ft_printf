/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:49:44 by afonso            #+#    #+#             */
/*   Updated: 2022/02/15 11:02:36 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

int	main(void)
{
	int				decimal = 10;
	int				integer = 10;
	unsigned int	u = 1000000;
	unsigned int	hexalow = 48600;
	char			c = 'F';
	int x;
	int y;

	x = printf("Printf normal:\n%d %i %u %s agora %c %x %X %p %%\nAhora soy guapo\n", decimal, integer, u, "string", c, hexalow, hexalow, &hexalow);
	y = ft_printf("Print anormal:\n%d %i %u %s agora %c %x %X %p %%\nAhora soy guapo\n", decimal, integer, u, "string", c, hexalow, hexalow, &hexalow);
	printf("%d\n", x);
	printf("%d\n", y);
}
