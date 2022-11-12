/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:03:25 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/12 11:22:07 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (s[i] != c)
		i--;
	if (s[0] != c)
		return (NULL);
	return ((char *)(s + i));
}

/*
int	main(int ac, char **av)
{

	int tofind = 'f';
	if (ac == 2)
	{
		printf("%s",ft_strrchr(av[1],tofind));
		printf("%s","\n");
		printf("%s",strrchr(av[1],tofind));
	}
}
*/