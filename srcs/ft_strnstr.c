/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 02:58:39 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/08 03:43:10 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	little_len = 0;
	while (little[little_len])
		little_len++;
	if (little_len == 0)
		return ((char *)big);
	while (*big && len--)
	{
		if (*big == *little && len + 1 >= little_len)
		{
			i = 0;
			while (i < little_len && big[i] == little[i])
				i++;
			if (i == little_len)
				return ((char *)big);
		}
		big++;
	}
	return (NULL);
}
/*
#include <stdio.h>

int main() {
    const char *big = "Hello, World!";
    const char *little = "World";
    size_t len = 12;

    char *result = ft_strnstr(big, little, len);
    if (result) {
        printf("Substring encontrada: %s\n", result);
    } else {
        printf("Substring não encontrada.\n");
    }

    return 0;
}
*/