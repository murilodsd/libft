/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:32:57 by mde-souz          #+#    #+#             */
/*   Updated: 2024/04/29 21:23:04 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"
int	main(void)
{
	printf("\n\n-------FT_STRLCAT-------\n");
	char *s1 = strdup("abcd");
	char s2[] = "bbbbb";
	char *s3 = strdup("abcd");
	char s4[] = "bbbbb";
	printf("Original\n");
	printf("STRLCAT em %s com %s return %ld string resultante ", s1,s2,strlcat(s1, s2, 1));
	printf("%s\n", s1);
	printf("Agora o meu\n");
	printf("STRLCAT em %s com %s return %ld string resultante ", s3,s4,ft_strlcat(s3, s4, 1));
	printf("%s\n", s3);

	printf("\n\n-------FT_ATOI-------\n");
	printf("ATOI EM 5 -> %d\n",ft_atoi("5"));
	printf("ATOI EM 0 -> %d\n",ft_atoi("0"));
	printf("ATOI EM vazio -> %d\n",ft_atoi(""));
	printf("ATOI EM 22a -> %d\n",ft_atoi("22a"));
	printf("ATOI EM a22a -> %d\n",ft_atoi("a22a"));
	printf("ATOI EM     -22a -> %d\n",ft_atoi("    -22a"));
	printf("ATOI EM +22a -> %d\n",ft_atoi("+22a"));
	printf("ATOI EM 2147483647 -> %d\n",ft_atoi("2147483647"));
	printf("ATOI EM -2147483648 -> %d\n",ft_atoi("-2147483648"));


	printf("\n\n-------FT_ITOA-------\n");
	printf("Printar -1 -> %s\n",ft_itoa(-1));
	printf("Printar -121 -> %s\n",ft_itoa(-121));
	printf("Printar 0 -> %s\n",ft_itoa(0));
	printf("Printar 2147483647 -> %s\n",ft_itoa(__INT_MAX__));
	printf("Printar -2147483648 -> %s\n",ft_itoa(-2147483648));

	return 0;
}