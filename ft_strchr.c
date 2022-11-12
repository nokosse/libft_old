/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:40:30 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/12 11:35:26 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return ((char *)(s + i));
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		int tofind = 'j';
		printf("%s", ft_strchr(av[1],tofind));
		printf("%s", "\n");
		printf("%s", strchr(av[1],tofind));
	}
}
*/