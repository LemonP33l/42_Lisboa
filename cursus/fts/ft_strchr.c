/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:28:41 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:08:22 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Check for a char in a string;
Return a pointer to the first occurrence of said char in string;
Return NULL if char's not found.
!!!The position is calculated with pointer arithmetic:
(Subtracting a pointer from another gives the distance);
*/

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)&s[i]);
	return (NULL);
}

/*
int main() {
    const char *str = "Hello, world!";
    char search_char = 'o';
    char *result;

    result = ft_strchr(str, search_char);

    if (result != NULL) {
        printf("Character '%c' found at position: %ld\n",
		 search_char, result - str);
    } else {
        printf("Character '%c' not found in the string.\n", search_char);
    }

    return 0;
}
*/
