/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: codespace <codespace@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 10:10:34 by codespace         #+#    #+#             */
/*   Updated: 2023/09/16 10:10:35 by codespace        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*ptr;
	size_t	i;

	ptr = malloc(nmemb * size);
	i = 0;
	while (i++ < nmemb)
		ptr[i] = (unsigned char) 0;
	return (ptr);
}
/*
#include <stdio.h>

int main(void)
{
	char *ptr1 = ft_calloc(6, sizeof(int));
	char *ptr2 = calloc(6, sizeof(int));

	for (int i = 0; i < 6; i++)
		printf("%d ", ptr1[i]);
	printf("\n");
	for (int i = 0; i < 6; i++)
		printf("%d ", ptr2[i]);
	return (0);
}
*/