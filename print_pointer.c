/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_pointer.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:27:00 by afonso            #+#    #+#             */
/*   Updated: 2022/03/02 17:13:32 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static	int	prepare_string(unsigned long long quotient, int strlen,
				char *string);

int	print_pointer(void	*ptr_x)
{
	char						string[16];
	int							strlen;
	unsigned long long int		quotient;

	if (ptr_x < 0 || ptr_x > (void *)UINT64_MAX)
	{
		ft_putstr_fd("(nil)", 1);
		return (1);
	}
	quotient = (unsigned long long)ptr_x;
	strlen = prepare_string(quotient, 0, string);
	ft_putstr_fd("0x", 1);
	ft_putstr_fd(string, 1);
	return (ft_strlen(string) + 2);
}

static	int	prepare_string(unsigned long long quotient, int strlen,
		char *string)
{
	int					aux;
	unsigned long long	temp;

	temp = quotient;
	if (!quotient)
	{
		temp = 1;
		quotient = 16;
	}
	while (temp)
	{
			temp /= 16;
			strlen++;
	}
	aux = strlen;
	while (aux < 16)
		string[aux++] = '\0';
	while (quotient)
	{
		string[--strlen] = (unsigned char)(quotient % 16);
		if (string[strlen] > 9)
			string[strlen] += 87;
		else
			string[strlen] += 48;
		quotient = quotient / 16;
	}
	return (strlen);
}

// int	main(void)
// {
// 	unsigned int	i;
// 	i = 100000000;
// 	printf("%p\n", &i);
// 	print_pointer(&i);
// }
