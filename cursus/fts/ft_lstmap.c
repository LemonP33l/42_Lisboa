/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/10 10:41:36 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/10 13:05:25 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Iterates lst and apply function f to the content of the respective node;
A new list is created resulting from the applications of f;
The del function is used if needed in case of errors (ex: content allocation);
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	new_list = (NULL);
	while (lst)
	{
		new_content = (*f)((*lst).content);
		new_node = ft_lstnew(new_content);
		if (!new_node)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = (*lst).next;
	}
	return (new_list);
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

void *double_content(void *content) {
    size_t *new_content = (size_t *)malloc(sizeof(size_t));
    if (!new_content)
        return (NULL);
    *new_content = (*(size_t *)content * 2);
    return (new_content);
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

	printf("Before mapping:\n");
	t_list *curr = lst;
	while (curr) {
		printf("%zu ", *(size_t *)((*curr).content));
		curr = (*curr).next;
	}
	printf("\n");

	ft_lstadd_back(&lst, node1);
	ft_lstadd_back(&lst, node2);
	ft_lstadd_back(&lst, node3);

	t_list *mapped_list = ft_lstmap(lst, &double_content, &del);

	printf("After mapping:\n");
	ft_lstiter(mapped_list, &print_content);
	printf("\n");

	ft_lstclear(&lst, &del);
	ft_lstclear(&mapped_list, &del);

	return 0;
}
*/
