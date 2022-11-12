/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:09:47 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/12 11:19:43 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c < 128)
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
	(void) ac;
	(void) av;

	int check = -1;
	if (ft_isascii(check) != 0)
		printf("%d", 1);
	else
		printf("%d", 0);

	printf("%s", "\n");

	if (isascii(check) != 0)
		printf("%d", 1);
	else
		printf("%d", 0);
}
*/