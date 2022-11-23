/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:30:02 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/23 13:45:06 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
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
	int check = 'b';
	int oui = isalpha(check);
	if (ft_isalpha(check) == 1)
		printf("%d", 1);
	else
		printf("%d", 0);

	printf("%s", "\n");

	if (isalpha(check) != 0)
		printf("%d", oui);
	else
		printf("%d", 0);
}
*/