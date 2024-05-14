/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:20:15 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:08:51 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Copy string from src to dst;
Copy up to size - 1 chars, and NULL terminate the result;
Return = src length (easier truncation detection);
*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
	{
		return (src_len);
	}
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

/*
int main() {
    char dest[20];
    const char src[] = "Hello, world!";
    
    size_t copied = ft_strlcpy(dest, src, sizeof(dest));
    
    printf("Copied string: %s\n", dest);
    printf("Number of chars: %zu\n", copied);
    
    return 0;
}
*/
