/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 14:06:56 by tkurukay          #+#    #+#             */
/*   Updated: 2023/10/30 11:44:19 by tkurukay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min_idx;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_idx])
			{
				min_idx = j;
			}
			j++;
		}
		temp = tab[i];
		tab[i] = tab[min_idx];
		tab[min_idx] = temp;
		i++;
	}
}
