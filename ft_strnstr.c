/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:58:07 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/12 11:24:35 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return ((char *)big + i);
	while (big[i] && i < len)
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (little[j] != '\0'
				&& big[i + j] != '\0'
				&& i + j < len
				&& big [i + j] == little [j])
				j++;
			if (little[j] == '\0')
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}

#include <bsd/string.h>
int	main (int ac, char **av)
{
	if (ac == 4)
	{
		printf("%s", ft_strnstr(av[1],av[2],atoi(av[3])));
		printf("%s","\n");
		printf("%s", strnstr(av[1],av[2],atoi(av[3])));
		//compiler avec lbsd
	}
}
