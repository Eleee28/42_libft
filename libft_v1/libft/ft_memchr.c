/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:56:06 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 10:24:33 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int		i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (*(str + i) != (char)c && i < n)
	{
		if (!*(str + i))
			return (0);
		else
			i++;
	}
	return (str + i);
}
/*
#include <string.h>

int main()
{
	char *ptr, str[] = "Holaa", *ptr1;

	ptr1 = memchr(str, 'l', 4);
	printf("%s\n", ptr1);
	ptr = ft_memchr(str, 'l', 4);
	printf("%s\n", ptr);
	return (0);
}

// Run tests to check that it works
*/