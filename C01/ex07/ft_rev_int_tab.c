/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 16:05:34 by tkurukay          #+#    #+#             */
/*   Updated: 2023/10/28 16:08:09 by tkurukay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	swap;

	i = 0;
	size--;
	while (i < size / 2)
	{
		swap = tab[i];
		tab[i] = tab[size - i];
		tab[size - i] = swap;
		i++;
	}
}
