/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:40:30 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/18 19:52:52 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Cherche c dans *s, puis quand il le trouve, retourne un pointeur
**	sur c dans *s, a la premiere occurence. 
**	Selon le man, le caractere c signifie "octet" et ne fonctionnera pas
**	avec un caractere multi-octet, en gros, c est un isprint. Je crois.
*/

char	*ft_strchr(const char *s, int c)
{
	while (*s != '\0')
	{
		if ((unsigned char)*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (0);
}

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		int tofind = 0;
// 		printf("tofind :%d\n", tofind);
// 		printf("mon strchr :%s", ft_strchr(av[1],tofind));
// 		printf("%s","%\n");
// 		printf("l'original :%s", strchr(av[1],tofind));
// 	}
// }