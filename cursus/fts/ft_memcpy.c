/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 15:22:13 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:07:37 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Copies n bytes from memory area src to dest;
Memory areas must not overlap;
Return pointer to dest;
*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*new_dest;
	char	*new_src;

	i = 0;
	new_dest = ((char *)dest);
	new_src = ((char *)src);
	while (i < n)
	{
		new_dest[i] = new_src[i];
		i++;
	}
	return (dest);
}

/*
int main() {
    char src[] = "Hello, world!";
    char dest[20];

    ft_memcpy(dest, src, 5 * sizeof(char));

    printf("Copied string: %s\n", dest);

    return 0;
}
*/
