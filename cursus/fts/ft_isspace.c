/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 10:20:06 by eduferna          #+#    #+#             */
/*   Updated: 2024/04/10 15:18:25 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Check white space chars: SPACE (' '), hor tab ('\t'), new line ('\n'),
ver tab ('\v'), form feed ('\f'), carriage ret ('\r');
*/

int	ft_isspace(char c)
{
	if ((c >= 9 && c <= 13) || (c == 32))
	{
		return (1);
	}
	return (0);
}
