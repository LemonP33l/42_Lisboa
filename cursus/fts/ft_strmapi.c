/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:00:21 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:09:03 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Apply function f to each char of string s;
The index is passed as first argument and the char as second argument;
A new string must be created to collect the results of each application;
*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	char	*str;

	i = 0;
	if (!s)
		return (NULL);
	str = ft_strdup(s);
	while (str[i])
	{
		str[i] = f(i, str[i]);
		i++;
	}
	return (str);
}

/*char add_one(unsigned int index, char c)
{
    // Unused index parameter
    (void)index;
    return c + 1;
}

int main()
{
    char str[] = "Hello, world!";
    char *result = ft_strmapi(str, &add_one);
    printf("Original string: %s\n", str);
    printf("Modified string: %s\n", result);
    free(result); // Don't forget to free the memory allocated by ft_strmapi
    return 0;
}*/
