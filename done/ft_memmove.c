/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 17:39:07 by mde-souz          #+#    #+#             */
/*   Updated: 2024/04/19 19:06:50 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  memmove()  function  copies n bytes from memory area src to memory
area dest.  The memory areas may overlap: copying takes place as though
the  bytes in src are first copied into a temporary array that does not
overlap src or dest, and the bytes are then copied from  the  temporary
array to dest.
The memmove() function returns a pointer to dest.
Para evitar sobreescrevermos a area de memoria que ainda vamos utilizar
fazemos uma condicional para ou comecar copiando do comecou ou do final*/

#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (d < s)
	{
		while (n--)
		{
			*d++ = *s++;
		}
	}
	else if (d > s)
	{
		while (n--)
		{
			d[n + 1] = s[n + 1];
		}
	}
	return (dest);
}
