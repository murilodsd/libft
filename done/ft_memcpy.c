/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/19 14:19:06 by mde-souz          #+#    #+#             */
/*   Updated: 2024/04/19 15:36:19 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  ft_memcpy()  function  copies  n bytes from memory area src to memory
       area dest.  The memory areas must not overlap.  Use memmove(3)  if  the
       memory areas do overlap.
       The ft_memcpy() function returns a pointer to dest.
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	unsigned const char	*s;

	d = (char *)dest;
	s = (const char *)src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}
