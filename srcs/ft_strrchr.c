/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 01:26:28 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/08 01:54:58 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*last;

	last = 0;
	while (*s)
	{
		if (*s == (char)c)
			last = s;
		s++;
	}
	if (c == '\0')
		return ((char *)s);
	return ((char *)last);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char 	str[] = "peixe";
	char 	c = 'e';
	
	printf("string: %s\npointer: %s\n", str, strrchr(str, c));
	printf("\nstring: %s\npointer: %s\n", str, ft_strrchr(str, c));
}*/