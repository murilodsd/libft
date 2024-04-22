/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 12:27:02 by mde-souz          #+#    #+#             */
/*   Updated: 2024/04/22 16:34:45 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* The  memchr()  function  scans  the  initial n bytes of the memory area
pointed to by s for the first instance of c.  Both c and the  bytes  of
the memory area pointed to by s are interpreted as unsigned char.
The  memchr()  and memrchr() functions return a pointer to the matching
byte or NULL if the character does not occur in the given memory area.*/

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	c1;

	s1 = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (n--)
	{
		if (*s1 == c1)
			return (s1);
		s1++;
	}
	return (0);
}
/* #include <stdio.h>
int	main(void)
{
    char *result = ft_memchr("batatas",'t',9);
    if (result)
        printf("Found 's' at position: %ld\n", result - "batatas");
    else
        printf("'s' not found\n");
} */