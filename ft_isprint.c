/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:55:49 by ejuarros          #+#    #+#             */
/*   Updated: 2023/11/20 08:32:43 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** @file ft_isprint.c 
 * 	@brief Libc isprint function
 * 
 * 	This function tests whether a character is printable.
*/

/* -- Includes -- */
#include "libft.h"

/** @brief tests whether a character is printable
 * 
 * 	The value of the argument must be representable as an unsigned char or the 
 * 	value of EOF. Space (' ') is included as a printable character.
 * 
 * 	@param c character to test
 * 	@return 0 if the character tests false, 1 if the character tests true
*/

int	ft_isprint(int c)
{
	int	ret_value;

	if (c >= 32 && c <= 126)
		ret_value = 1;
	else
		ret_value = 0;
	return (ret_value);
}
