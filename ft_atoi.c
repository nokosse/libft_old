/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nok <nok@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 14:58:50 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/15 23:13:24 by nok              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	i;
	int	symb;
	int	nb;

	nb = 0;
	symb = 1;
	i = 0;
	while ((str[i] == ' ') || (str[i] >= 11 && str[i] <= 15))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			symb *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		nb = (nb * 10 + str[i]) - '0';
		i++;
	}
	return (nb * symb);
}

// int	main(int ac, char **av)
// {
// 	if(ac == 2)
// 	{
// 		printf("%d", ft_atoi(av[1]));
// 		printf("%s", "\n");
// 		printf("%d", atoi(av[1]));
// 	}
// }