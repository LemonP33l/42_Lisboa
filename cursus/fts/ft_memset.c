/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 14:25:28 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/10 15:52:21 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Replace the first n bytes of memory pointed by s with const byte c;
Return pointer to s;
*/

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = ((char *)s);
	while (i < n)
	{
		str[i] = ((unsigned char)c);
		i++;
	}
	return (s);
}

/*
int main() {
    char arr[20] = "Hello World!"; 
    printf("Original array: %s\n", arr); 
   
    ft_memset(arr, 'O', 5 * sizeof(char)); 
  
    printf("New array: %s", arr); 
    return 0; 
}
*/
