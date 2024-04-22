/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murilodsd <murilodsd@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 05:19:30 by murilodsd         #+#    #+#             */
/*   Updated: 2024/04/22 05:55:57 by murilodsd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s==c)
			return ((char *)s);
		s++;
	}
	if (c=='\0')
		return ((char *)s);
	return (0);
}
/* #include <stdio.h>
int 	main(void)
{
	char *s = "b";
	printf("%p\n",s);
	printf("%p\n",ft_strchr(s,'\0'));
} */