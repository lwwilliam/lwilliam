/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/23 13:09:47 by lwilliam          #+#    #+#             */
/*   Updated: 2022/04/26 16:27:58 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_is_prime(int y)
{
	int	x;

	x = 2;
	if (y <= 1)
		return (0);
	while (x <= y / x)
	{
		if (y % x == 0)
			return (0);
		x++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	x;

	if (nb < 1)
		return (2);
	x = nb;
	while (ft_is_prime(x) != 1)
		x++;
	return (x);
}
