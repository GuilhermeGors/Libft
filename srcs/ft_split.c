/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gugomes- <gugomes-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 18:47:05 by gugomes-          #+#    #+#             */
/*   Updated: 2024/10/11 20:44:41 by gugomes-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_words(const char *s, char c)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

char	*copy_word(const char *s, int word_len)
{
	char	*word;
	int		i;

	word = (char *)malloc((word_len + 1) * sizeof(char));
	if (!word)
		return (NULL);
	i = 0;
	while (i < word_len)
	{
		word[i] = s[i];
		i++;
	}
	word[word_len] = '\0';
	return (word);
}
void	free_strarr(char **strarr, int i)
{
	while (i >= 0)
	{
		free(strarr[i]);
		i--;
	}
	free(strarr);
}
char	**ft_split(char const *s, char c)
{
	char	**strarr;
	int		i;
	int		word_len;
	int		count;

	count = count_words(s, c);
	strarr = (char **)malloc((count + 1) * sizeof(char *));
	if (!strarr)
		return (NULL);
	i = 0;
	while (*s)
	{
		if (*s != c)
		{
			word_len = 0;
			while (s[word_len] && s[word_len] != c)
				word_len++;
			strarr[i++] = copy_word(s, word_len);
			s += word_len;
		}
		else
			s++;
	}
	strarr[i] = NULL;
	return (strarr);
}
/*
#include <stdio.h>

int	main(void)
{
	char	**result;
	int		i;

	result = ft_split("hello world this is a test", ' ');
	if (!result)
	{
		printf("Error: Memory allocation failed\n");
		return (1);
	}
	i = 0;
	while (result[i])
	{
		printf("Word %d: %s\n", i, result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return (0);
}*/