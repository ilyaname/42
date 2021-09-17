/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imegy <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 08:18:50 by imegy             #+#    #+#             */
/*   Updated: 2021/09/17 08:18:52 by imegy            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	int			i;
	int			res;
	int			minus;

	i = 0;
	res = 0;
	minus = 1;
	while (str[i] < 48 || str[i] > 57)
	{
		if (str[i] == '-')
			minus *= -1;
		i ++;
	}
	while (str[i] > 47 && str[i] < 58)
	{
		res = res * 10 + str[i] - '0';
		i ++;
	}
	return (minus * res);
}
