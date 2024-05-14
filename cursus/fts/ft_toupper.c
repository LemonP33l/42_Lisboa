/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 15:02:16 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:09:39 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
If char c is lowercase, return the uppercase equivalent;
Ascii table has a 32 char difference between upper and lower equivalents;
*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
	}
	return (c);
}

/*
int main() {
    char lowercase = 'a';
    char uppercase;

    uppercase = ft_toupper(lowercase);

    printf("Original character: %c\n", lowercase);
    printf("Uppercase character: %c\n", uppercase);

    return 0;
}
*/
