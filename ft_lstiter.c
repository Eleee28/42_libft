/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 11:45:41 by ejuarros          #+#    #+#             */
/*   Updated: 2023/11/20 08:32:54 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** @file ft_lstiter.c 
 * 	@brief Function to manipulate lists
 * 
 * 	This function iterates the list and applies a function on the content of 
 * 	the nodes.
*/

/* -- Includes -- */
#include "libft.h"

/** @brief iterates the list and aplies a function on the content of the nodes
 * 
 * 	@param lst pointer to the list
 * 	@param f pointer to a function
 * 	@return Void
*/

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
