/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:29:29 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/17 20:04:40 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
**	*s1 = "+-++yo+les-mec--+-"
**	*set= "+-"
**	ft_strtrim(s1, set) = yo+les-mec
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
	printf("strlen de s1: %ld\n",strlen(s1));
	char	*str;
	int		i;
	int		j;
	int		n;
	int		max;

	i = left_trim(s1, set);
	printf("left  trim :%d\n",i);
	j = i;
	max = right_trim(s1, set) + 1;
	printf("right trim :%d\n",max);
	while (i != max)
	{
		i++;
		n++;
	}
	str = malloc((n + 1) * (sizeof(char *)));
	printf("malloc :%d * (sizeof(char *))\n\n",n + 1);
	i = 0;
	printf("j :%d\n",i);
	while (j < max)
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

int	main (int ac, char **av)
{
	if (ac == 3)
	{
	char *s1 = av[1];
	char *set = av[2];
	printf("Voici le trimage: %s",ft_strtrim(s1, set));
	}
}