/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:37:23 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/13 15:58:32 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1[0] == '\0' && s2[0] == '\0')
		return (0);
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

// int	main (int ac, char **av)
// {
// 	if (ac == 4)
// 	{
// 		printf("%d",ft_strncmp(av[1], av[2], atoi(av[3])));
// 		printf("%s","\n");
// 		printf("%d",strncmp(av[1], av[2], atoi(av[3])));
// 	}
// }