/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 20:42:19 by mde-souz          #+#    #+#             */
/*   Updated: 2024/04/25 20:44:10 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Deletes and frees the given node and every
successor of that node, using the function ’del’ and free(3).
Finally, the pointer to the list must be set to
NULL.
*/

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{

}