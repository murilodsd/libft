/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:54:23 by mde-souz          #+#    #+#             */
/*   Updated: 2024/04/18 15:04:38 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * Allocates (with malloc(3)) and returns a new
 * string, which is the result of the concatenation
 * of ’s1’ and ’s2’.
 *
 * @param s1 The prefix string.
 * @param s2 The suffix string.
 *
 * @return The new string. NULL if the allocation fails.
 */

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*concat;
	int		i;

	concat = ((char *)malloc(sizeof(s1) + sizeof(s2) + 1));
	if (concat == NULL)
		return (NULL);
	i = 0;
	while (*s1)
		concat[i++] = *s1++;
	while (*s2)
		concat[i++] = *s2++;
	concat[i] = '\0';
	return (concat);
}
/* #include <stdio.h>
int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	printf("%s\n", ft_strjoin("", ""));
}  */