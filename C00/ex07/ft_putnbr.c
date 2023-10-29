/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <kullaniciAdi@student.42kocaeli.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 14:27:53 by tkurukay          #+#    #+#             */
/*   Updated: 2023/10/24 11:17:43 by tkurukay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char a)
{
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	int		b;
	int		num[10];
	long	a;

	a = nb;
	b = 0;
	if (a < 0)
	{
		a = -a;
		ft_print('-');
	}
	if (a == 0)
		ft_print('0');
	while (a != 0)
	{
		num[b] = a % 10 + 48;
		a /= 10;
		b++;
	}
	while (b > 0)
	{
		ft_print(num[b - 1]);
		b--;
	}
}
