/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:49:44 by afonso            #+#    #+#             */
/*   Updated: 2022/02/24 17:15:29 by atereso-         ###   ########.fr       */
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
	int d;

	x = printf("Printf normal:\n%d %i %u %s agora %c %x %X %p %%\na\n", decimal, integer, u, "O Davi e feioso", c, hexalow, hexalow, &hexalow);
	y = ft_printf("Print anormal:\n%d %i %u %s agora %c %x %X %p %%\na\n", decimal, integer, u, "O Davi e feioso", c, hexalow, hexalow, &hexalow);
	d = ft_printf("%s\n", "davi");
	ft_printf("%d\n", d);
	d = printf("%s\n", "davi");
	d = ft_printf("%x", hexalow);
	printf("%d\n", d);
	printf("%d\n", x);
	printf("%d\n", y);
}
