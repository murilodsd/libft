/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/24 14:52:03 by mde-souz          #+#    #+#             */
/*   Updated: 2024/04/27 19:47:16 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.*/

#include "libft.h"

static int	ft_countdec(int n)
{
	int	count;

	count = 1;
	while (n > 9)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static void	ft_fillarray(char *p, int n, size_t size)
{
	p[size] = '\0';
	while (size && p[size - 1] != '-')
	{
		p[--size] = (n % 10) + '0';
		n /= 10;
	}
}

char	*ft_itoa(int n)
{
	size_t	size;
	size_t	decplaces;
	char	*p;

	size = 0;
	if (n < 0)
	{
		size++;
		n *= (-1);
	}
	decplaces = ft_countdec(n);
	size = size + decplaces;
	p = (char *)malloc(sizeof(char) * (size + 1));
	if (!p)
		return (NULL);
	if (size != decplaces)
	{
		p[0] = '-';
	}
	ft_fillarray(p, n, size);
	return (p);
}
/* #include <stdio.h>
int	main(void)
{
	printf("%s\n",ft_itoa(-1));
	printf("%s\n",ft_itoa(-121));
	printf("%s\n",ft_itoa(0));
	printf("%s\n",ft_itoa(__INT_MAX__));
} */