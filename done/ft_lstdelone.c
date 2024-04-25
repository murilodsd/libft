/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mde-souz <mde-souz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 19:22:57 by mde-souz          #+#    #+#             */
/*   Updated: 2024/04/25 21:20:29 by mde-souz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** 
 * Takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given
as a parameter and free the node. The memory of
’next’ must not be freed.
 * @param lst: The node to free.
 * @param del: The address of the function used to delete the content.
 */

#include "libft.h"

void ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
/* #include <stdio.h>
void ft_printlst(t_list *head)
{
	t_list *temp = head;
	
	if (!head)
		printf("Lista inexistente\n");
	else
	{
	while (temp != NULL)
	{
		printf("%d ", *(int *)temp->content);
		temp = temp->next;
	}
	printf("\n");
	}
}
int	*ft_seq_int_arr(int rand_num)
{
	int	*p_num;

	p_num = (int *)malloc(sizeof(int) * rand_num);
	if(!p_num)
		return (NULL);
	while(rand_num--)
		p_num[rand_num] = rand_num;
	return (p_num);
}
void	delete(void* content)
{
	return ;
	free(content);
}
int	main(void)
{
	printf("\n");
	int	num = 2;
	int	*p_num = ft_seq_int_arr(num);//gera um array sequencial 0,1,2...
	t_list	*head;
	
	head = NULL;
 	while (num--)//lista array sequencial comecando pelo primeiro, o zero.
		ft_lstadd_back(&head,ft_lstnew(p_num++));
	printf("Do primeiro ao ultimo ->");
	ft_printlst(head);
	printf("#------------------------------#\n");
	printf("Deletando o ultimo da lista: %d\n", *(int *)ft_lstlast(head)->content);
	ft_lstdelone(ft_lstlast(head),delete);
	ft_lstdelone(head,delete);
	printf("Size of p_num: %zu\n", sizeof(p_num));
	printf("Size of s_list: %zu\n", sizeof(t_list));
	free(p_num-2);
	return (0);
} */