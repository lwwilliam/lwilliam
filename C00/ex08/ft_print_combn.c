/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 10:12:32 by lwilliam          #+#    #+#             */
/*   Updated: 2022/04/12 10:58:12 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<unistd.h>

void	ft_print_combn(int n)
{
	write(1, &n, 1);
}

int	main (void)
{
	int	n;
	0 < n < 10;
	ft_print_combn(n);
}

