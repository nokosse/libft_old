/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:03:25 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/18 11:31:19 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Trouve c dans *s et renvoie le reste de la chaine a partir de c.
**	A la difference de strchr, il renvoie la derniere occurence de la chaine *s 
**	et non la premiere.
*/

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (s[0] == '\0')
		return (NULL);
	while (s[i] != c && i != 0)
		i--;
	if (i == 0 && s[i] != c)
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
