/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:13:31 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/13 19:54:29 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_int_len(int n)
{
	int	cpt;

	cpt = 0;
	while (n != 0)
	{
		cpt++;
		n /= 10;
	}
	return (cpt);
}

char	*ft_itoa(int n)
{
	char	*strint;

	strint = malloc((sizeof(char *)) * (get_int_len(n)) + 1);
	strint[get_int_len(n) + 1] = '\0';
}

// int	main(int ac, char **av)
// {
// }