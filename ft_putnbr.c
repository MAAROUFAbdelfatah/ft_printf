/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaarouf <amaarouf@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 16:14:54 by amaarouf          #+#    #+#             */
/*   Updated: 2022/03/02 09:15:25 by amaarouf         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putnbr(int n, t_args *arg)
{
	long	nb;

	nb = n;
	if (nb < 0)
	{
		ft_putchar('-', arg);
		nb *= -1;
	}
	if (nb > 9)
	{
		ft_putnbr(nb / 10, arg);
		ft_putnbr(nb % 10, arg);
	}
	else
		ft_putchar(nb + '0', arg);
}
