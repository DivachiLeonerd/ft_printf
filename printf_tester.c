/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_tester.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atereso- <atereso-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:49:44 by afonso            #+#    #+#             */
/*   Updated: 2022/03/15 20:00:53 by atereso-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdint.h>
#include"ft_printf.h"

int	main(void)
{
	int integer = 10;

	int	mycounter = 0;
	int counter = 0;

	printf("\n***integer testers***\n\n");
	counter = printf("int_max:%d\nint_low:%d\nint normal:%d\n", INT32_MAX, INT32_MIN, integer);
	mycounter = ft_printf("int_max:%d\nint_low:%d\nint normal:%d\n", INT32_MAX, INT32_MIN, integer);
	printf("counter:%d\nmycounter:%d\n\n",counter, mycounter);

	printf("***unsigned int testers***\n\n");
	counter = printf("umax:%u\numin:%u\nu negativo:%u\n",UINT32_MAX, 0, -1);
	mycounter = ft_printf("umax:%u\numin:%u\nu negativo:%u\n",UINT32_MAX, 0, -1);
	printf("counter:%d\nmycounter:%d\n\n", counter, mycounter);

	printf("***unsigned long long tester***\n\n");
	counter = printf("ullmax:%p\nNULL:%p\null:%p\nNULL:%p\n\n", (void *)UINT64_MAX, NULL, (void *)UINT64_MAX - 1, NULL);
	mycounter = ft_printf("ullmax:%p\nNULL:%p\null:%p\nNULL:%p\n\n", (void *)UINT64_MAX, NULL, (void *)UINT64_MAX - 1, NULL);
	printf("counter:%d\nmycounter:%d\n\n", counter, mycounter);

	printf("***hexa testers***\n\n");
	counter = printf("umax:%x\numin:%x\nu%x\n",UINT32_MAX, 0, -1);
	mycounter = ft_printf("umax:%x\numin:%x\nu%x\n",UINT32_MAX, 0, -1);
	printf("counter:%d\nmycounter:%d\n\n", counter, mycounter);

	printf("***char tester***\n\n");
	counter = printf("charmax:%c\ncharmin:%c\nchar:%c\n", 256, 0, 'c');
	mycounter = printf("charmax:%c\ncharmin:%c\nchar:%c\n", 256, 0, 'c');
	ft_printf("Counter:%d\nMycounter:%d\n", counter, mycounter);

	printf("\n***Miscelaneous tests***\n\n");
	counter = printf("NULL pointer:%p VS NULL hexa:%x VS NULL Hexa:%X\n", NULL, -1, -1);
	mycounter = ft_printf("NULL pointer:%p VS NULL hexa:%x VS NULL Hexa:%X\n", NULL, -1, -1);
	printf("counter:%d\nmycounter:%d\n\n", counter, mycounter);
	counter = printf("%p\nbolas\n", (void *)UINT64_MAX);
	printf("%d\n", counter);
	mycounter = ft_printf("%p\nbolas\n", (void *)UINT64_MAX);
	ft_printf("%d\n", mycounter);
	ft_printf("Tou a 100%%\n");
	ft_printf("Tou a 100%\n");
	counter = printf("%s\n", NULL);
	printf("%d\n", counter);
	printf("%x\n", 17);
	ft_printf("%x\n", 17);
}
