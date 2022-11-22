/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:29:29 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/22 13:52:23 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	*s1 = "+-++yo+les-mec--+-"
**	*set= "+-"
**	ft_strtrim(s1, set) = yo+les-mec
**	enfait il enleve les char de *set a gauche et a droite seulement.
*/

int	is_trim(const char letter, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (letter == set[i])
			return (1);
		i++;
	}
	return (0);
}

/*
** Fonction qui nous fais avancer jusqu'a l'index ou on est plus sur un
** trimset a gauche 
*/

int	left_trim(const char *s1, const char *set)
{
	int	i;

	i = 0;
	while (is_trim(s1[i], set) == 1)
		i++;
	return (i);
}

/*
**	Idem a droite 
*/

int	right_trim(const char *s1, const char *set)
{
	int	i;

	if (s1[0] == '\0')
		return (0);
	i = strlen(s1) - 1;
	while (is_trim(s1[i], set) == 1)
		i--;
	return (i);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*str;
	int		i;
	int		j;
	int		n;
	int		max;

	i = left_trim(s1, set);
	j = i;
	max = right_trim(s1, set) + 1;
	while (i != max)
	{
		i++;
		n++;
	}
	str = malloc((n + 1) * (sizeof(char *)));
	i = 0;
	while (j < max)
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

// int	main (int ac, char **av)
// {
// 	if (ac == 3)
// 	{
// 	char *s1 = av[1];
// 	char *set = av[2];
// 	printf("Voici le trimage: %s",ft_strtrim(s1, set));
// 	}
// }