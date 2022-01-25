/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afonso <afonso@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:07:15 by afonso            #+#    #+#             */
/*   Updated: 2022/01/25 13:11:32 by afonso           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include<stdlib.h>
# include"libft.h"
# include <stdarg.h>

int		ft_printf(const char *string, ...);
void	print_char(const char *string);
void	print_string(const char *string);
void	print_pointer(int ptr_value, char format);
void	print_integer(int integer);
void	print_unsignedchar(unsigned int chr);
void	print_hexa(unsigned int value, const char format);

#endif
