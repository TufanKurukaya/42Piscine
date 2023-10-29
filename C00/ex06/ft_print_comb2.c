/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/22 17:15:22 by tkurukay          #+#    #+#             */
/*   Updated: 2023/10/23 11:55:00 by tkurukay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char x)
{
	int	v;
	int	f;

	v = x / 10 + 48;
	f = x % 10 + 48;
	write(1, &v, 1);
	write(1, &f, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a);
			write(1, " ", 1);
			ft_putchar(b);
			if (a != 98)
				write(1, ", ", 2);
			b++;
		}
		a++;
	}
}
