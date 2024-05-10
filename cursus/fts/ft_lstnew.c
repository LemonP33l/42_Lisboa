/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 18:17:42 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/10 13:30:50 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocate and return a new node;
The variable content for new node is initialized by value of param content;
The variable next for new node is initialized by NULL;
*/

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = (t_list *)malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	(*new_node).content = content;
	(*new_node).next = NULL;
	return (new_node);
}

/*
int main() {
	int data = 42;

	t_list *node = ft_lstnew(&data);

	if (node != NULL) {
		printf("Node created successfully.\n");

		printf("Content: %d\n", *(int *)((*node).content));
		
		free(node);
	} else {
		printf("Failed to create node.\n");
	}
	return 0;
}
*/
