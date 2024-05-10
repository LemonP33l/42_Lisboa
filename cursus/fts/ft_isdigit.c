/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 10:32:47 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/10 13:48:50 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Check if c is a digit (0 through 9)
*/

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/*
int	main() {
	
	printf("Testing ft_isdigit:\n");
    printf("ft_isdigit('A'): %d\n", ft_isdigit('A'));
    printf("ft_isdigit('a'): %d\n", ft_isdigit('a'));
    printf("ft_isdigit('Z'): %d\n", ft_isdigit('Z'));
    printf("ft_isdigit('z'): %d\n", ft_isdigit('z'));
    printf("ft_isdigit('0'): %d\n", ft_isdigit('0'));
    printf("ft_isdigit('9'): %d\n", ft_isdigit('9'));
    printf("ft_isdigit('#'): %d\n", ft_isdigit('#'));
    return 0;
}
*/
