/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murilodsd <murilodsd@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/21 16:32:59 by murilodsd         #+#    #+#             */
/*   Updated: 2024/04/21 20:09:06 by murilodsd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	unsigned int	i;

	if (size > 0)
	{
		size--;
		i = 0;
		while (size-- && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		*dst = '\0';
	}
	return (ft_strlen(src));
}
