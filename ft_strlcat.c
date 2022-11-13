/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 15:11:58 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/13 15:49:32 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (dest[i] && i < size)
		i++;
	while (src[j])
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (ft_strlen(dest));
}

// #include <bsd/string.h>
// int	main (int ac, char **av)
// {
// 	if (ac == 7)
// 	{
// 		printf("%ld", ft_strlcat(av[1], av[2], atoi(av[3])));
// 		printf("%s", "\n");
// 		printf("%ld", strlcat(av[4], av[5], atoi(av[6])));
// 	}
// }