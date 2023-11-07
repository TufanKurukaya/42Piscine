/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 04:07:08 by tkurukay          #+#    #+#             */
/*   Updated: 2023/11/02 04:09:52 by tkurukay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] < 'A' || str[i] > 'Z'))
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	ctrl;

	i = 0;
	ctrl = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (ctrl == 1)
			{
				str[i] -= 32;
				ctrl = 0;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9')
			ctrl = 0;
		else
			ctrl = 1;
		i++;
	}
	return (str);
}
