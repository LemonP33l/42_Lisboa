/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:09:45 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:08:29 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Create string which is a duplicate of s;
Mem for the duplicate is obtained with malloc;
Return a pointer to the duplicate or NULL if insufficient mem was available;
*/

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	len_s;
	char	*str_dup;

	i = 0;
	len_s = ft_strlen(s);
	str_dup = (char *)malloc(sizeof(*s) * (len_s + 1));
	if (str_dup == 0)
	{
		return (NULL);
	}
	while (s[i] != '\0')
	{
		str_dup[i] = s[i];
		i++;
	}
	str_dup[i] = '\0';
	return (str_dup);
}

/*
int main() {
    const char *original_str = "Hello, world!";
    char *duplicate_str;
    
    duplicate_str = ft_strdup(original_str);

    if (duplicate_str != NULL) {
        printf("Original string: %s\n", original_str);
        printf("Duplicate string: %s\n", duplicate_str);

        free(duplicate_str);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/
