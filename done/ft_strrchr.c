/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murilodsd <murilodsd@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 05:41:36 by murilodsd         #+#    #+#             */
/*   Updated: 2024/04/22 05:59:33 by murilodsd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int i;
	
	i = (int)ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == c)
			return ((char *)(s+i));
		i--;
	}
	return (0);
}
/* #include <stdio.h>
int 	main(void)
{
	char *s = "batata";
	printf("%p\n",s);
	printf("%p\n",ft_strrchr(s,'b'));
} */