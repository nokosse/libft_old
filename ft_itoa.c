/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:13:31 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/18 11:13:30 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_int_len(int n)
{
	int	cpt;

	cpt = 0;
	if (n < 0)
		cpt++;
	while (n != 0)
	{
		cpt++;
		n = n / 10;
	}
	return (cpt);
}

char	*ft_itoa(int nb)
{
	char	*strint;
	int		i;
	long	n;

	n = nb;
	strint = malloc (sizeof(char *) * get_int_len(n) + 1);
	i = get_int_len(n);
	strint[i] = '\0';
	i--;
	if (n == 0)
	{
		strint[0] = '0';
		return (strint);
	}
	if (n < 0)
	{
		strint[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		strint[i--] = (n % 10) + '0';
		n /= 10;
	}
	return (strint);
}

// int	main(void)
// {
// 	printf("%s",ft_itoa(4242));
// }