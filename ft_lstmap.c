/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 13:30:34 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/28 14:05:52 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	Itère sur la liste 'lst' et applique 'f' au contenu de chaque élément.
**	Crée une nouvelle liste résultant des applications successives de 'f' 
**	La fonction 'del' détruit le contenu d’un élément si nécessaire.
**	lst : L’adresse du pointeur vers un élément.
**	f : L’adresse de la fonction à appliquer.
**	del : adresse de la fct. permettant de suppr. le contenu de l'element
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	(void) lst;
	(void) (*f);
	(void) (*del);
	return lst;
}
