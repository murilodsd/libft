/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murilodsd <murilodsd@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:59:00 by murilodsd         #+#    #+#             */
/*   Updated: 2024/04/21 20:12:06 by murilodsd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;

	if (size > 0)
	{
		i = 0;
		while (dst[i])
			i++;
		size--;
		while (i < size && *src)
		{
			dst[i] = *src++;
			i++;
		}
		dst[i] = '\0';
		while (*src++)
			i++;
	}
	return (i);
}
/* #include <stdio.h>
int	main(void)
{
	char s1[] = "aaaa";
	char s2[] = "bbbb";
	printf("%ld\n", ft_strlcat(&s1[0], s2,7));
	printf("%s", s1);
} */