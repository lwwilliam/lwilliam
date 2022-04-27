/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/21 19:16:26 by lwilliam          #+#    #+#             */
/*   Updated: 2022/04/26 16:24:40 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	int	x;

	if (nb == 0 || nb == 1)
		return (1);
	if (nb < 0)
		return (0);
	else
	{
		x = nb * ft_recursive_factorial(nb - 1);
	}
	return (x);
}
