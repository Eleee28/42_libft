/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:59:39 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 18:32:58 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	end;

	end = ft_strlen(s);
	while (end > 0)
	{
		if (s[end] == c)
			return ((char *)&s[end]);
		end--;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	char *ptr, str[] = "teste";

	ptr = ft_strrchr(str, '\0');
	printf("%s\n", ptr);
	return (0);
}
*/
