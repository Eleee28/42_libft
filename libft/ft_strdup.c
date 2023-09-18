/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:10:40 by codespace         #+#    #+#             */
/*   Updated: 2023/09/18 05:51:31 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int     i;
    int     len;
	char	*ptr;

	len = str_len(src);
	ptr = (char *)malloc(len * sizeof(char));
	i = 0;
	while (i < len)
	{
		*(ptr + i) = *(src + i);
		i++;
	}
	return (ptr);
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char str[5];
	char *str_ptr;
	char *src = NULL;
	int	i;

	str_ptr = &str[0];
	i = 0;
	while (i < 5)
	{
		str[i] = '0' + i;
		i++;
	}
	src = ft_strdup(str_ptr);

	printf("Original string in the stack: %s\n", str);
	printf("Copied string in the heap: %s\n", src);
	free(src);
	return (0);
}
*/