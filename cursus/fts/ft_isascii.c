/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eduferna <eduferna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 14:24:23 by eduferna          #+#    #+#             */
/*   Updated: 2024/04/09 14:46:15 by eduferna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Check if c fits into ASCII char set;
*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
