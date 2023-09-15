/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 09:54:08 by ejuarros          #+#    #+#             */
/*   Updated: 2023/09/15 10:21:23 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	num;
	int	sign;
	int	i;

	num = 0;
	sign = 1;
	i = 0;
	if (nptr[0] == '-')
	{
		sign = -1;
		i = 1;
	}
	else if (nptr[0] == '+')
		i = 1;
	while ((nptr[i] >= '0' && nptr[i] <= '9'))
	{
		num = num * 10 + (nptr[i] - '0');
		i++;
	}
	return (num * sign);
}
/*
int	main(void)
{
	printf("%d\n", ft_atoi("-12345") * 10);
	return (0);
}
*/