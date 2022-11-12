/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 11:30:34 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/08 11:38:01 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_isprint(int c)
{
	if (c > 31 && c < 127)
		return (1);
	else
		return (0);
}

/*
int	main(int ac, char **av)
{
	(void) ac;
	(void) av;
	int check = 32;
	
	if (ft_isprint(check) != 0)
		printf("%d", 1);
	else
		printf("%d", 0);

	printf("%s", "\n");

	if (isprint(check) != 0)
		printf("%d", 1);
	else
		printf("%d", 0);
}
*/