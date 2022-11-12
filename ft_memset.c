/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 19:29:44 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/12 11:16:15 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int	main(int ac, char **av)
{
	(void) ac;
	char *test = ["bonjour"];
	
	int val = 'X';
	printf("%p",memset(av[1], val, atoi(av[2])));
}