/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:40:30 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/18 11:31:14 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Cherche c dans *s, puis quand il le trouve, retourne un pointeur
**	sur c dans *s, a la premiere occurence. 
*/

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

// int	main(int ac, char **av)
// {
// 	if (ac == 2)
// 	{
// 		int tofind = 'j';
// 		printf("%s", ft_strchr(av[1],tofind));
// 		printf("%s", "\n");
// 		printf("%s", strchr(av[1],tofind));
// 	}
// }