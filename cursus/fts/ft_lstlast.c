/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 12:22:49 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:07:07 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Return the last node of the list;
*/

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst)
	{
		if ((*lst).next == NULL)
			return (lst);
		else
			lst = (*lst).next;
	}
	return (lst);
}

/*
int del_flag = 0;

void del(void *content) {
	free(content);
	del_flag = 1;
}

int main() {
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

	ft_lstadd_front(&lst, node1);
	ft_lstadd_front(&lst, node2);
	ft_lstadd_front(&lst, node3);

	t_list *last_node = ft_lstlast(lst);

	size_t last_content = *((size_t *)((*last_node).content));

	printf("Last node: ");

	printf("%zu", last_content);
	printf("\n");

	ft_lstclear(&lst, &del);

	return 0;
}
*/
