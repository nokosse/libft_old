/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:50:04 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/13 17:22:58 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"



int	main (int ac, char **av)
{
	if (ac == 2)
	{
		int	i = 0;
		char	sep = ' ';
		char	**split = ft_split(av[1], sep);
		while (split[i])
		{
			printf("%s\n",split[i]);
			i++;
		}

	}
}