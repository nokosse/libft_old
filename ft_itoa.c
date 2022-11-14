/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:13:31 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/14 12:25:00 by kvisouth         ###   ########.fr       */
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
	int		i;
	
	i = get_int_len(n);
	strint = malloc((sizeof(char *)) * (get_int_len(n)) + 1);
	strint[get_int_len(n) + 1] = '\0';
	while (i != 0)
	{
		strint[i] = n - '0';
		n = n % 10;
		i--;
	}
	return (strint);
}

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("%s",ft_itoa(atoi(av[2])));
	}
}