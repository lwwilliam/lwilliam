/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/25 15:08:16 by lwilliam          #+#    #+#             */
/*   Updated: 2022/04/25 17:57:24 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char b)
{
	write(1, &b, 1);
}

void	ft_putstr(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
	{
		ft_putchar(str[a]);
		a++;
	}
}

int	main(int ac, char **av)
{
	int	x;

	x = ac - 1;
	while (x > 0)
	{
		ft_putstr(av[x]);
		ft_putchar('\n');
		x--;
	}
	return (0);
}
