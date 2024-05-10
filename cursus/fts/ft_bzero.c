/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:55:03 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/10 15:54:14 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Replace the first n bytes of memory pointed by s with 0 ('\0');
*/

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = ((char *)s);
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}

/*
int main() {
    char arr[20] = "Hello World!"; 
    printf("Original array: %s\n", arr); 
   
    ft_bzero(arr, 5 * sizeof(char)); 
  
    printf("New array: %s", arr); 
    return 0; 
}
*/
