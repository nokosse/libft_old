/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:27:07 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/12 11:22:04 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

/*
int	main (int ac, char **av)
{
	if (ac == 2)
	{
		printf("%ld",ft_strlen(av[1]));
		printf("%s","\n");
		printf("%ld",strlen(av[1]));
	}
}
*/