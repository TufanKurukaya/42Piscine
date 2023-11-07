/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkurukay <tkurukay@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 15:43:26 by tkurukay          #+#    #+#             */
/*   Updated: 2023/11/04 15:44:32 by tkurukay         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	d;
	unsigned int	i;

	i = -1;
	d = -1;
	while (dest[++d])
		;
	while (src[++i] && i < nb)
		dest[d + i] = src[i];
	return (dest[d + i] = '\0', dest);
}
