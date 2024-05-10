/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:55:36 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/10 16:21:10 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Copies n bytes from memory area src to dest;
Memory areas may overlap (similar to temporary array);
Return pointer to dest;
*/

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*new_dest;
	char	*new_src;

	new_dest = ((char *)dest);
	new_src = ((char *)src);
	if (new_dest > new_src)
	{
		while (n > 0)
		{
			n--;
			new_dest[n] = new_src[n];
		}
	}
	else
	{
		ft_memcpy(new_dest, new_src, n);
	}
	return (dest);
}

/*
int main() {
    char str[20] = "Hello, world!";
	size_t len = ft_strlen(str) + 1;

    ft_memcpy(str + 5, str, len - 7);
	printf("%zu\n", len);
    printf("Result string: %s\n", str);

    return 0;
}
*/
