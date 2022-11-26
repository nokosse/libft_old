/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/26 17:07:43 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/26 17:36:24 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Renvoie le dernier element de la liste
**	lst : debut de la liste.
*/

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*elem;

	elem = lst;
	while (elem != NULL)
		elem = elem->next;
	return (elem);
}
