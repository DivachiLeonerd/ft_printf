/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:49:44 by afonso            #+#    #+#             */
/*   Updated: 2022/02/13 12:38:10 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ft_printf.h"

// static	void	deci_hexa(char	*string, char format)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (string[i])
// 	{
// 		if (string[i] < 10)
// 			string[i] = string[i] + 48;
// 		if (format == 'p' || format == 'x')
// 			if (string[i] >= 10)
// 				string[i] = string[i] + 87;
// 		if (format == 'X')
// 			if (string[i] >= 10)
// 				string[i] = string[i] + 55;
// 		i++;
// 	}
// 	ft_putstr_fd(string, 1);
// }

// void	print_hexa(unsigned int x, char format)
// {
// 	char			string[9];
// 	unsigned int	i;
// 	unsigned int	strlen;

// 	string[8] = '\0';
// 	i = 0;
// 	i = x;
// 	while (i)
// 	{
// 		i = i / 16;
// 		strlen++;
// 	}
// 	i = strlen;
// 	while (string[strlen])
// 		string[strlen++] = '\0';
// 	while (i >= 0)
// 	{
// 		string[i--] = x % 16;
// 		x = x / 16;
// 	}
// 	if (format == 'p')
// 		ft_putstr_fd("0x", 1);
// 	deci_hexa(string, format);
// }

int	main(void)
{
	int				decimal = 10;
	int				integer = 10;
	unsigned int	u = 1000000;
	unsigned int	hexalow = 48600;
	char			c = 'F';

	// print_hexa(u, 'p');
	printf("Printf normal:\n%d %i %u %s agora %c %x %X %p %%\nAhora soy guapo\n", decimal, integer, u, "string", c, hexalow, hexalow, &hexalow);
	ft_printf("Print anormal:\n%d %i %u %s agora %c %x %X %p %%\nAhora soy guapo\n", decimal, integer, u, "string", c, hexalow, hexalow, &hexalow);
}
