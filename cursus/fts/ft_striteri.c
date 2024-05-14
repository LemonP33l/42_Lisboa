/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 16:55:15 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:08:33 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Apply function f to each char of string s passed as argument;
The index is passed as first argument;
The chars are passed by address to f if needed;
*/

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void print_index_char(unsigned int index, char *c)
{
    (void)index;
    printf("Index: %u, Character: %c\n", index, *c);
}

int main()
{
    char str[] = "Hello, world!";
    printf("Original string: %s\n", str);
    ft_striteri(str, &print_index_char);
    return 0;
}*/
