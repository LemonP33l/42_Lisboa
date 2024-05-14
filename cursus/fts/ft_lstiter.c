/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 18:58:25 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:07:03 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Iterates lst and apply function f to the content of the respective node;
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		(*f)((*lst).content);
		lst = (*lst).next;
	}
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

	printf("Before iterating list:\n");
	t_list *curr = lst;
	while (curr) {
		printf("%zu ", *(size_t *)((*curr).content));
		curr = (*curr).next;
	}
	printf("\n");

	ft_lstadd_back(&lst, node1);
	ft_lstadd_back(&lst, node2);
	ft_lstadd_back(&lst, node3);

	printf("After iterating list:\n");
	ft_lstiter(node1, &print_content);
	printf("\n");

	ft_lstclear(&lst, &del);

	return 0;
}
*/
