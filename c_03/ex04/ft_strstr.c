/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imegy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/16 15:02:41 by imegy             #+#    #+#             */
/*   Updated: 2021/09/16 15:02:43 by imegy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i != n)
	{
		if (s1[i] - s2[i] != 0 )
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	len_to_find;

	i = 0;
	len_to_find = ft_strlen(to_find);
	while (str[i])
	{
		if (*str == *to_find)
		{
			if (!ft_strncmp(str, to_find, len_to_find))
				return ((char *)str);
		}
		str ++;
	}
	return (NULL);
}
