/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 17:31:18 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/18 11:11:16 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
** ft_substr retourne une chaine
*/

int	get_len(const char *s, unsigned int start, size_t len)
{
	int		nb;
	size_t	max_len;

	if (s[0] == '\0')
		return (0);
	max_len = strlen(s) - 1;
	if (len > max_len)
		len = max_len;
	nb = len - start;
	if (nb < 0)
		nb *= -1;
	return (nb);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*str;
	int				nb;
	int				i;
	int				j;
	int				x;

	if (s[0] == '\0')
		return (0);
	nb = get_len(s, start, len);
	str = malloc((sizeof(char *) * nb) + 1);
	i = 0;
	j = start;
	x = 0;
	while (x <= nb)
	{
		str[i] = s[j];
		j++;
		i++;
		x++;
	}
	str[i] = '\0';
	return (str);
}

/*
**	petit exemple :
**	B O N J O U R \0
**	0 1 2 3 4 5 6 7 
**	  ^         ^
**	 start      len
**	$> ONJOUR
*/

// int	main(int ac, char **av)
// {
// 	if (ac == 4)
// 	{
// 		unsigned int start = atoi(av[2]);
// 		size_t	size = atoi(av[3]);
// 		const char *str = av[1];
// 		printf("%s",ft_substr(str, start, size));
// 	}
// }