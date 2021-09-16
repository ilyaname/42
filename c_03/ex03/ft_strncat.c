/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imegy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 14:37:01 by imegy             #+#    #+#             */
/*   Updated: 2021/09/16 14:37:09 by imegy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				len_dest;
	unsigned int	i;

	len_dest = ft_strlen(dest);
	i = 0;
	while (i != nb)
	{
		dest[len_dest + i] = src[i];
		i ++;
	}
	dest[len_dest + i] = '\0';
	return (dest);
}
