/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:42:51 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:09:35 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
If char c is uppercase, return the lowercase equivalent;
Ascii table has a 32 char difference between upper and lower equivalents;
*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
	}
	return (c);
}

/*
int main() {
    char uppercase = 'A';
    char lowercase;

    lowercase = ft_tolower(uppercase);

    printf("Original character: %c\n", uppercase);
    printf("Lowercase character: %c\n", lowercase);

    return 0;
}
*/
