/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/24 11:19:41 by lwilliam          #+#    #+#             */
/*   Updated: 2022/04/25 18:01:18 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_atoi(char *str)
{
	int	x;
	int	y;
	int	negative;

	x = 0;
	y = 0;
	negative = 1;
	while (str[x] == ' ' || str[x] == '\n' || str[x] == '\t'
		|| str[x] == '\v' || str[x] == '\f' || str[x] == '\r')
		x++;
	while (str[x] == '-' || str[x] == '+')
	{
		if (str[x] == '-')
			negative *= -1;
		x++;
	}
	while (str[x] >= '0' && str[x] <= '9')
	{
		y = y * 10 + str[x] - '0';
		x++;
	}
	return (y * negative);
}
