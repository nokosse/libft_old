/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 11:13:31 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/23 14:10:54 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Alloue (avec malloc(3)) et retourne une chaîne
**	de caractères représentant l’entier ’n’ reçu en
**	argument. Les nombres négatifs doivent être gérés.
*/

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

char	*ft_putnbr(int nb, char *strint)
{
	int		i;
	long	n;

	n = nb;
	i = get_int_len(n);
	strint[i--] = '\0';
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

char	*ft_itoa(int nb)
{
	char	*strint;
	int		i;
	long	n;

	n = nb;
	i = get_int_len(n);
	strint = malloc (sizeof(char) * i + 1);
	if (!strint)
		return (NULL);
	strint = ft_putnbr(nb, strint);
	return (strint);
}

// int	main(void)
// {
// 	printf("%s",ft_itoa(4242));
// }