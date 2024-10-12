/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 23:38:27 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/08 00:55:45 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t nsize)
{
	size_t	size;
	void	*block;

	if (!num || !nsize)
		return (NULL);
	size = num * nsize;
	if (nsize != size / num)
		return (NULL);
	block = malloc(size);
	if (!block)
		return (NULL);
	ft_memset(block, 0, size);
	return (block);
}
