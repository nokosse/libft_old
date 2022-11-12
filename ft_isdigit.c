/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:23:56 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/12 11:19:55 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	(void) ac;
	(void) av;
	int check = 's';
	if (ft_isdigit(check) != 0)
		printf("%d", 1);
	else
		printf("%d", 0);

	printf("%s", "\n");

	if (isdigit(check) != 0)
		printf("%d", 1);
	else
		printf("%d", 0);
}
*/