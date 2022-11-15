/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:50:04 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/15 10:52:34 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	is_sep(const char s, char c) //Prend en parametre une lettre et la compare a c pour voir si c'est un separateur (1)
{
	if (s == c)
		return (1);
	return (0);
}

size_t	wrd_len(const char *s, char c) //Retourne en int la longueur d'un mot. (C'est un strlen special split)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && is_sep(s[i], c) == 0) //Parcours le mot et s'arrete des qu'il y a un separateur
		i++;
	return (i);
}

size_t	strcnt(const char *s, char c) //Parcours toute la chaine *s, retourne sa longueur sans les separateurs
{
	int	i;
	int	sep_count;

	sep_count = 0;
	i = 0;
	while (s[i])
	{
		if (is_sep(s[i], c) == 1)	//Compte les separateur
			sep_count++;
		i++;						//Compte len de *s
	}
	return (i - sep_count);			//Renvoie len - separateur
}

char	*word(const char *s, char c) //Fonctionne comme strdup. Mais jusqua wdlen, et non '\0'
{
	int		wdlen;
	char	*wd;
	int		i;

	i = 0;
	wdlen = wrd_len (s, c);
	wd = malloc (wdlen + 1);
	if (!wd)
		return (NULL);
	while (i < wdlen)
	{
		wd[i] = s[i];
		i++;
	}
	wd[i] = '\0';
	return (wd);
}

char	**ft_split(const char *s, char c)
{
	char	**strs;
	int		i;

	strs = malloc ((strcnt (s, c)) * (sizeof(char *)) + 1); //Le sizeof est important car il faut preciser que le tableau de tableau sera de type char*
	if (!strs)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		while (is_sep(*s, c) == 1 && *s) // 1. Parcourir *s tant qu'on est sur un separateur
			s++;	//On incremente le pointeur s. Il pointera donc sur le deuxieme caractere de *s, puis le troisieme etc..
		if (*s)		//Si *s pas fini
		{
			strs[i] = word(s, c);	//On envoi a word (strdup modifier) le pointeur s et la lettre separatrice.
			i++;	//Une fois le mot mis dans le premier tableau de tableau, on incremente i pour passer au prochain tab de tab.
		}
		while (is_sep(*s, c) == 0 && *s) //Vu quon a mis le mot qui nous interessais, on peut le skip et passer au mot suivamt.
			s++;	//On incremente le pointeur s jusqu'a atteindre un separateur.
	}				//Puis on remonte dans la boucle, ou on sera sur un separateur, ou la fin et on repete
	strs[i] = NULL;	//On finis par mettre un NULL comme le demande a la consigne.
	return (strs);
}

// int	main (int ac, char **av)
// {
// 		int	i = 0;
// 		if (ac == 2)
// 		{
// 			char	sep = ' ';
// 			char	**split = ft_split(av[1], sep);
// 			while (split[i])
// 			{
// 				printf("split %d : %s\n",i,split[i]);
// 				i++;
// 			}
// 		}
// }