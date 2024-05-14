/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 12:21:41 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:09:13 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Locate first occurrence of null terminated string little, in big;
Check up to len chars.
Return big if little is empty;
Return NULL if little isn't found;
Return pointer to first char of first occurrence of little in big;
*/

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
	{
		return ((char *)big);
	}
	while (big[i] != '\0' && i < len)
	{
		j = 0;
		while ((big[i + j] == little[j]) && (i + j) < len)
		{
			if (little[j + 1] == '\0')
			{
				return ((char *)&big[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
int main() {
    const char *big_str = "Hello, world!";
    const char *little_str = "world";
    size_t len = sizeof(big_str);
    
    char *result = ft_strnstr(big_str, little_str, len);

    if (result != NULL) {
        printf("'%s' found starting at position: %ld\n", little_str,
         result - big_str);
    } else {
        printf("'%s' not found in the first %zu characters of the big_str.\n",
         little_str, len);
    }

    return 0;
}
*/
