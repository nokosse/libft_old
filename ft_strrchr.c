/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nok <nok@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:03:25 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/15 23:13:54 by nok              ###   ########.fr       */
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
