/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 09:45:42 by eduferna          #+#    #+#             */
/*   Updated: 2024/04/09 14:13:54 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Check if c is an alphabetical char;
Equivalent to (isupper(c) || islower(c));
*/

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
	{
		return (1);
	}
	return (0);
}
