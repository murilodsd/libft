/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 15:06:26 by mde-souz          #+#    #+#             */
/*   Updated: 2024/04/18 16:59:32 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * This function checks if the given character is either 
 * an alphabetic character or a digit.
 * @param c The character to be checked.
 * @return 1 if the character is alphanumeric, 0 otherwise.
 */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
