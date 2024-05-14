/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 10:01:55 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:06:51 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Takes node new and links it to the privious first node of the list;
*/

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	(*new).next = *lst;
	*lst = new;
}

/*
int del_flag = 0;

void del(void *content) {
	free(content);
	del_flag = 1;
}

void print_content(void *content) {
	printf("%zu ", *(size_t *)content);
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

	printf("List elements: ");
	t_list *curr = lst;
	while (curr != NULL) {
		printf("%zu ", *((size_t *)(*curr).content));
		curr = (*curr).next;
	}
	printf("\n");

	ft_lstclear(&lst, &del);

	return 0;
}
*/
