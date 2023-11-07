/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 00:17:32 by tkurukay          #+#    #+#             */
/*   Updated: 2023/11/07 00:19:50 by tkurukay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = ac;
	while (--i > 0)
	{
		j = 0;
		while (av[i][j] && ac)
		{
			write(1, &av[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
