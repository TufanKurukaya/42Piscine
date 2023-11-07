/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 11:32:39 by tkurukay          #+#    #+#             */
/*   Updated: 2023/11/03 11:33:47 by tkurukay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	d;
	int	i;

	i = -1;
	d = -1;
	while (dest[++d])
		;
	while (src[++i])
		dest[d + i] = src[i];
	return (dest[d + i] = '\0', dest);
}
