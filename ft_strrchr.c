/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:03:25 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/12 20:11:42 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (s[0] == '\0')
		return (NULL);
	while (s[i] != c && i != 0)
		i--;
	if (i == 0)
		return (0);
	return ((char *)(s + i));
}

// #include <bsd/string.h>
// int	main(int ac, char **av)
// {

// 	int tofind = 'f';
// 	if (ac == 2)
// 	{
// 		printf("%s",ft_strrchr(av[1],tofind));
// 		printf("%s","\n");
// 		printf("%s",strrchr(av[1],tofind));
// 	}
// }
