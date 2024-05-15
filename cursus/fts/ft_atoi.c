/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:15:38 by eduferna          #+#    #+#             */
/*   Updated: 2024/05/15 12:26:25 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Converts initial part of a string to int;
ATOI DOES NOT DETECT ERRORS;
*/

static	int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
	{
		return (1);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	final;

	i = 0;
	sign = 1;
	final = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-')
	{
		sign = sign * -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	while (ft_isdigit(str[i]) && str[i] != '\0')
	{
		final = (final * 10) + (str[i] - 48);
		i++;
	}
	final = final * sign;
	return (final);
}

/*
int main() {
    const char *str = "   -12345abc";

    int result = ft_atoi(str);

    printf("Result of ft_atoi: %d\n", result);

    return 0;
}
*/
