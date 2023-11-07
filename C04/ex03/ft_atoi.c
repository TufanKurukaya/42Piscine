/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 14:33:06 by tkurukay          #+#    #+#             */
/*   Updated: 2023/11/05 14:35:10 by tkurukay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sing;
	int	result;
	int	i;

	sing = 1;
	result = 0;
	i = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sing = sing * (-1);
		i++;
	}
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		result = result * 10;
		result += str[i] - '0';
		i++;
	}
	return (result * sing);
}
