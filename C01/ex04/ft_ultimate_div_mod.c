/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 12:54:39 by tkurukay          #+#    #+#             */
/*   Updated: 2023/10/28 11:41:18 by tkurukay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;

	if (b != 0)
	{
		c = *a / *b;
		*b = *a % *b;
		*a = c;
	}
}
