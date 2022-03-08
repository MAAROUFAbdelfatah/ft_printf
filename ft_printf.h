/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaarouf <amaarouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:07:46 by amaarouf          #+#    #+#             */
/*   Updated: 2022/03/02 09:07:15 by amaarouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct Arg
{
	int			len;
	va_list		ptr_args;
}	t_args;

void	ft_putchar(char c, t_args *arg);
void	ft_putnbr(int n, t_args *arg);
void	ft_putx(unsigned long x, t_args *arg, int upper);
void	ft_putnbr_un(unsigned int n, t_args *arg);
void	ft_putstr(char *s, t_args *arg);
void	ft_putp(unsigned long x, t_args *arg);
void	ft_type(const char c, t_args *arg);
int		ft_printf(const char *format, ...);
#endif
