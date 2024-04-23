/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:48:55 by mde-souz          #+#    #+#             */
/*   Updated: 2024/04/23 19:51:04 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string. */

#include "libft.h"

size_t	ft_strtrimlen(char const *s1, char const *set);

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s2;
	int		i;
	int		j;

	i = 0;
	s2 = (char *)malloc(sizeof(char) * ft_strtrimlen(s1, set) + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while (*s1)
	{
		j = 0;
		while (set[j] != *s1 && set[j])
			j++;
		if (set[j] == '\0')
			s2[i++] = *s1;
		s1++;
	}
	s2[i] = '\0';
	return (s2);
}

size_t	ft_strtrimlen(char const *s1, char const *set)
{
	size_t	len;
	int		i;
	int		j;

	len = 0;
	i = 0;
	while (s1[i])
	{
		j = 0;
		while (set[j] != s1[i] && set[j])
			j++;
		if (set[j] == '\0')
			len++;
		i++;
	}
	return (len);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%s",ft_strtrim("---_s-tring_principa****l_*-","_-"));
} */