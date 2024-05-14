/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/20 14:13:57 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:07:31 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Compare the first n bytes of the memory areas s1 and s2 (as unsigned chars);
Returns an int less than, equal to, or greater than 0
(respectively: s1 <, >, = s2);
*/

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*new_s1;
	unsigned char	*new_s2;

	i = 0;
	new_s1 = ((unsigned char *)s1);
	new_s2 = ((unsigned char *)s2);
	while (i < n && (new_s1[i] == new_s2[i]))
	{
		i++;
	}
	if (i == n)
		return (0);
	else
		return (new_s1[i] - new_s2[i]);
}

/*
int main() {
    const char str1[] = "Hello, world!";
    const char str2[] = "Hello, world!";
    size_t n = sizeof(str1);
    
    int result = ft_memcmp(str1, str2, n);

    if (result == 0) {
        printf("The first %zu characters of the strings are equal.\n", n);
    } else if (result < 0) {
        printf("The first %zu characters of the first string are less than 
		the corresponding characters of the second string.\n", n);
    } else {
        printf("The first %zu characters of the first string are greater than 
		the corresponding characters of the second string.\n", n);
    }

    return 0;
}
*/
