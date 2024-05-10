/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 09:36:01 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/10 14:01:05 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Calculates length of string pointed by s (exclude null '\0');
size_t defined by <string.h>, unsigned long;
*/

size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
int	main() {
	
	char arr[] = "Hello World!";

	printf("The string is: %s\n", arr);
	printf("The size is: %zu\n", ft_strlen(arr));
	return (0);
}
*/
