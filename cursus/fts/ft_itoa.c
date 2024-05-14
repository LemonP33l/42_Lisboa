/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/07 11:46:08 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/14 12:06:45 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Allocates memory returning a string that represents th int received as input;
Negative numbers are handled;
Static functions: Limited scope to the file where it is declared;
(Make sure it's an helper function to this file);
*/

static	size_t	ft_nbr_count(int n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long int	nbr;
	size_t		len;
	char		*str;

	nbr = n;
	len = ft_nbr_count(n);
	if (n < 0)
	{
		nbr = -nbr;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	while (len)
	{
		len--;
		str[len] = nbr % 10 + '0';
		nbr = nbr / 10;
	}
	if (n < 0)
		str[0] = '-';
	return (str);
}

/*
int main() {
    int num = -12345;
    char *str;

    str = ft_itoa(num);

    if (str != NULL) {
        printf("Original number: %d\n", num);
        printf("Converted string: %s\n", str);

        free(str);
    } else {
        printf("Memory allocation failed.\n");
    }

    return 0;
}
*/
