/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kvisouth <kvisouth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 10:05:20 by kvisouth          #+#    #+#             */
/*   Updated: 2022/11/15 11:52:04 by kvisouth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*str;
	size_t	i;

	str = s;
	i = 0;
	while (i < n)
	{
		*str = (unsigned char)c;
		i++;
		str++;
	}
	return (s);
}

// int main(void)
// {
// 	char str[] = "yo les mec";
// 	printf("%s\n",str);
// 	ft_memset(str, '/', 4);
// 	printf("%s",str);
// 	return (0);
// }