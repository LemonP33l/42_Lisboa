/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:33:57 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/09 11:56:49 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Split the input string s into substrings based on the delimiter c;
Return an array of pointers to those substrings;
*/

static	size_t	ft_substr_count(const char *s, char c)
{
	size_t	substr_count;

	substr_count = 0;
	while (*s != '\0')
	{
		while (*s == c)
		{
			s++;
		}
		if (*s != '\0')
		{
			substr_count++;
		}
		while (*s != '\0' && *s != c)
		{
			s++;
		}
	}
	return (substr_count);
}

char	**ft_split(char const *s, char c)
{
	size_t	i;
	size_t	len;
	char	**new;

	i = 0;
	new = (char **)malloc(sizeof(char *) * (ft_substr_count(s, c) + 1));
	if (s == NULL || new == NULL)
		return (NULL);
	while (*s != '\0')
	{
		while (*s != '\0' && *s == c)
			s++;
		if (*s != '\0')
		{
			if (ft_strchr(s, c) == NULL)
				len = ft_strlen(s);
			else
				len = ft_strchr(s, c) - s;
			new[i] = ft_substr(s, 0, len);
			s = s + len;
			i++;
		}
	}
	new[i] = NULL;
	return (new);
}

/*int main()
{
    char str[] = "Hello,world,this,is,a,test";
    char **result = ft_split(str, ',');
    if (result == NULL)
    {
        printf("Split failed\n");
        return 1;
    }
    for (int i = 0; result[i] != NULL; i++)
    {
        printf("%s\n", result[i]);
        free(result[i]);
    }
    free(result);
    return 0;
}*/
