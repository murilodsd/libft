/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 17:50:03 by mde-souz          #+#    #+#             */
/*   Updated: 2024/04/19 19:41:58 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* The  bzero()  function  erases  the  data  in the n bytes of the memory
starting at the location pointed to by s, by writing zeros (bytes  con‐
taining '\0') to that area.
*/

#include <stddef.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n--)
		*p++ = '\0';
	return (s);
}
