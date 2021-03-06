/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: icourr <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/29 09:20:04 by icourr            #+#    #+#             */
/*   Updated: 2021/06/30 08:50:55 by icourr           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	x;
	int	y;

	i = 0;
	x = 0;
	y = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	while (dest[y] != '\0')
	{
		y++;
	}
	while (x < i)
	{
		dest[y] = src[x];
		y++;
		x++;
	}
	dest[y] = '\0';
	return (dest);
}
