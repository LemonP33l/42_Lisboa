/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:41:59 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:06:39 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Check if c is a printable char (including SPACE);
*/

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
	{
		return (1);
	}
	return (0);
}

/*
int	main() {
	
	printf("Testing ft_isprint:\n");
    printf("ft_isprint('A'): %d\n", ft_isprint('A'));
    printf("ft_isprint('a'): %d\n", ft_isprint('a'));
    printf("ft_isprint('Z'): %d\n", ft_isprint('Z'));
    printf("ft_isprint('z'): %d\n", ft_isprint('z'));
    printf("ft_isprint('0'): %d\n", ft_isprint('0'));
    printf("ft_isprint('9'): %d\n", ft_isprint('9'));
    printf("ft_isprint('#'): %d\n", ft_isprint('#'));
    return 0;
}
*/
