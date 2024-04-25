/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 08:58:35 by mde-souz          #+#    #+#             */
/*   Updated: 2024/04/25 10:22:31 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Adds the node ’new’ at the beginning of the list.*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (*lst)
		new->next = *lst;
	else 
		*lst = (t_list *)malloc(sizeof(t_list));
	*lst = new;	
}
#include <stdio.h>
void printList(t_list *head)
{
	t_list *temp = head;
	while (temp != NULL)
	{
		printf("%d ", *(int *)temp->content);
		temp = temp->next;
	}
	printf("\n");
}

int	*ft_rand_int_arr(int rand_num)
{
	int	*p_num;

	p_num = (int *)malloc(sizeof(int) * rand_num);
	while(rand_num)
		p_num[--rand_num] = rand_num;
	return (p_num);
}
int	main(void)
{
	int	num = 5;
	int	*p_num = ft_rand_int_arr(num);
	t_list	*head;
	
	head = NULL;
 	while (num--)
	{	ft_lstadd_front(&head,ft_lstnew(p_num++));
	}
	printList(head);
	return (0);
}