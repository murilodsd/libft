/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 20:16:36 by mde-souz          #+#    #+#             */
/*   Updated: 2024/04/18 14:59:44 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* checks  for an alphabetic character; in the standard "C" locale,
it is equivalent to (isupper(c) ||  islower(c)).   In  some  lo‐
cales, there may be additional characters for which isalpha() is
true—letters which are neither uppercase nor lowercase. */

int	ft_isupper(int c)
{
	if ((c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

int	ft_islower(int c)
{
	if ((c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	ft_isalpha(int c)
{
	if ((ft_isupper(c) || ft_islower(c)))
		return (1);
	return (0);
}
/* #include <stdio.h>
int main(int argc, char **argv) {
	argc = argc;
    printf("%c e letra %d\n",argv[1][0], ft_isalpha(argv[1][0]));
    return 0;
} */
