/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 20:05:14 by mde-souz          #+#    #+#             */
/*   Updated: 2024/04/23 22:04:56 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.
The array of new strings resulting from the split.
NULL if the allocation fails.*/

#include "libft.h"

int	ft_count_str(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		if(*s != c && (*(s + 1) == c || *(s + 1) == '\0'))
			count++;
		s++;
	}
	return (count);
}

size_t	ft_lendelimiter(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] && s[len] != c)
		len++;
	return (len);
}

/* void	ft_fillarray(char *p, char const *s, char c)
{
	
} */

char	**ft_split(char const *s, char c)
{
	char	**p;
	int		i;
	int		j;

	p = (char **)malloc(sizeof(char *) * (ft_count_str(s,c) + 1));
	if (!p)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			p[i] = (char *)malloc(sizeof(char) * (ft_lendelimiter(s,c)) + 1);
			if(!p[i])
				return (NULL);
			j = 0;
			while (*s && *s != c)
				p[i][j++] = *s++;
			p[i][j] = '\0';
			i++;
;		}
		else
			s++;	
	}
	p[i] = '\0';
	return (p);
}
#include <stdio.h>
int	main(void)
{	
	int	words = 4;
	char 	**p;
	
	p = ft_split("string1_string2_string3_string4",'_');
	while (words--)
	printf("%s",*p++);
}