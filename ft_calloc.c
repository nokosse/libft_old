/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:01:59 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/23 13:45:04 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	calloc alloue un bloc memoire de la taille de nmemb * size 
**	et remplis ce bloc par des 0 (des '\0'), d'ou ft_bzero.
**	/!\ Retourne NULL si on essaie d'allouer SIZE_MAX * SIZE_MAX
**	et si l'allocation echoue.
*/

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;
	int		len;

	if (nmemb == SIZE_MAX && size == SIZE_MAX)
		return (NULL);
	len = nmemb * size;
	p = malloc(len);
	if (!p)
		return (NULL);
	ft_bzero(p, len);
	return (p);
}
