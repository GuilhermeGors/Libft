/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 20:34:41 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/12 01:44:50 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	is_negative(int *n)
{
	if (*n < 0)
	{
		*n = -(*n);
		return (1);
	}
	return (0);
}

char	*ft_itoa(int n)
{
	static int	index = 0;
	static int	count = 0;
	char		*str;
	char		c[12];
	static int	sign;

	sign = is_negative(&n);
	if (n == -2147483648)
		return ("-2147483648");
	if (n == 0)
		c[count++] = '0';
	while (n > 0)
	{
		c[count++] = (n % 10) + '0';
		n /= 10;
	}
	if (sign)
		c[count++] = '-';
	str = (char *)malloc(count + 1);
	if (!str)
		return (NULL);
	while (count > 0)
		str[index++] = c[--count];
	str[index] = '\0';
	return (str);
}
/*
int	main(void)
{
	int		num = 4;
	char	*str = ft_itoa(num);

	printf("----------------\n\nitoa: \nnum: %d\nstring: %s\n", num, str);
}
*/