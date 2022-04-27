/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lwilliam <lwilliam@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 20:22:24 by lwilliam          #+#    #+#             */
/*   Updated: 2022/04/19 14:45:22 by lwilliam         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_small(char *str)
{
	int	x;

	x = 0;
	while (str[x] != '\0')
	{
		if (str[x] > 64 && str[x] < 91)
			str[x] += 32;
		x++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	ft_small(str);
	while (str[x] != '\0')
	{
		if (y == 1 && str[x] >= 'a' && str[x] <= 'z')
		{
			str[x] -= 32;
		}
		if ((str[x] < 65 || str[x] > 90)
			&& (str[x] < 97 || str[x] > 122)
			&& (str[x] < 48 || str[x] > 57))
		{
			y = 1;
		}
		else
			y = 0;
		x++;
	}
	return (str);
}
