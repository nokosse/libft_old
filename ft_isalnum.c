/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 11:45:49 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/23 13:45:05 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9')
		|| (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

/*
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	main (int ac, char **av)
{
	(void) av;
	(void) ac;
	int check = '0';
	if (ft_isalnum(check) == 1) //Check avec ma fonction
		printf("%d",1);
	else
		printf("%d",0);

	printf("%s","\n");

	if (ft_isalnum(check) == 1) //Check avec la vraie fonction
		printf("%d",1);
	else
		printf("%d",0);
}
*/