/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:14:27 by mde-souz          #+#    #+#             */
/*   Updated: 2024/04/23 18:48:23 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Extracts a substring from a given string.
 *
 * Allocates (with malloc(3)) and returns a substring
 * from the string ’s’.
 * The substring begins at index ’start’ and is of
 * maximum size ’len’.
 *
 * @param s The original string from which the substring will be extracted.
 * @param start The starting index of the substring.
 * @param len The length of the substring.
 * @return The substring as a newly allocated string
 * or NULL if memory allocation fails.
 */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	s_substr;
	int		i;

	if (len <= ft_strlen(s) - (size_t)start)
		s_substr = len;
	else
		s_substr = ft_strlen(s) - (size_t)start;
	substr = (char *)malloc(sizeof(char) * s_substr + 1);
	if (!substr)
		return (NULL);
	i = 0;
	while (s[i + start] && len--)
	{
		substr[i] = s[i + start];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%s",ft_substr("stringprincipal",0,15));
} */