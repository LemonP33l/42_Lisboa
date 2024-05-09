/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 14:12:02 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/09 14:54:47 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Add node new to the end of list lst, linking the previous last node to it;
*/

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
	{
		*lst = new;
		return ;
	}
	last = ft_lstlast(*lst);
	(*last).next = new;
}

/*
int main()
{
	t_list *lst = NULL;
	size_t *content1 = (size_t *)malloc(sizeof(size_t));
	size_t *content2 = (size_t *)malloc(sizeof(size_t));
	size_t *content3 = (size_t *)malloc(sizeof(size_t));

	*content1 = 1;
	*content2 = 2;
	*content3 = 3;

	t_list *node1 = ft_lstnew(content1);
	t_list *node2 = ft_lstnew(content2);
	t_list *node3 = ft_lstnew(content3);

	ft_lstadd_back(&lst, node1);
	ft_lstadd_back(&lst, node2);
	ft_lstadd_back(&lst, node3);

	printf("List elements: ");
	t_list *curr = lst;
	while (curr != NULL) {
		printf("%zu ", *((size_t *)(*curr).content));
		curr = (*curr).next;
	}
	printf("\n");

	free(content1);
	free(content2);
	free(content3);
	free(node1);
	free(node2);
	free(node3);

	return (0);
}
*/
