/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaarouf <amaarouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:29:11 by amaarouf          #+#    #+#             */
/*   Updated: 2022/03/02 09:20:43 by amaarouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putstr(char *s, t_args *arg)
{
	int	i;

	i = 0;
	if (!s)
	{
		ft_putstr("(null)", arg);
	}
	if (s)
	{
		while (s[i])
		{
			ft_putchar(s[i], arg);
			i++;
		}
	}
}
