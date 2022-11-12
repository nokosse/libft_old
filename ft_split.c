/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:50:04 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/12 11:21:08 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	is_sep(const char letter, char c)
{
	if (letter == c)
		return (1);
	return (0);
}

size_t	ft_strlen(const char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && is_sep(s[i], c) == 0)
		i++;
	return (i);
}

size_t	strcnt(const char *s, char c)
{
	int	i;

	i = 0; 
	while (s[i])
	{
		if (is_sep(*s, c) == 0)
			i++;
	}
	return (i);
}

char	*word(const char *s, char c)
{
	int		wdlen;
	char	*wd;
	int		i;

	i = 0;
	wdlen = ft_strlen (s, c);
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

	strs = malloc (strcnt (s, c) + 1);
	if (!strs)
		return (NULL);
	i = 0;
	while (*s != '\0')
	{
		while (is_sep(*s, c) == 1 && *s)
			s++;
		if (*s)
		{
			strs[i] = word(s, c);
			i++;
		}
		while (is_sep(*s, c) == 0 && *s)
			s++;
	}
	strs[i] = NULL;
	return (strs);
}

int	main (int ac, char **av)
{
	if (ac == 2)
	{
		int	i = 0;
		char	sep = ' ';
		char	**split = ft_split(av[1], sep);
		while (split[i])
		{
			printf("%s\n",split[i]);
//			printf("^ Adresse de i : %p",&i);
//			printf("%s","\n");
			i++;
		}
		free(split);

		i = 0;
		while(split[i])
		{
			free(split[i]);
			i++;
		}
		free(split[i]);
	}
}