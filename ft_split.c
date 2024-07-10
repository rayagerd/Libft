/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:48:52 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/10 22:20:48 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_count(char const *s, char c)
{
	int	counter;
	int i;

	counter = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			counter++;
		}
		while(s[i] && s[i] != c)
		{
			i++;
			if (s[i] == '\0')
				return (counter);
		}
		i++;
	}	
	return (counter);
}				

static void	ft_free(char **farray, int failed)
{
	while (failed > 0)
	{
		free(farray[failed - 1]);
		failed--;
	}
	free(farray);
}


char **ft_split(char const *s, char c)
{
	char **array;
	int	num_words;
	int	i;
	int	j;

	array = (char **)ft_calloc(ft_count(s, c) + 1, sizeof(char *));
	if (!array)
		return (NULL);
	i = 0;
	j = 0;
	num_words = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
		{
			i++;
			j++;
		}
		while (s[j] && s[j] != c)
		{
			j++;
		}
		array[num_words] = ft_substr(s, i, j);
		if (!array[num_words])
		{
			ft_free(array, num_words);
			return (NULL);
		}
		num_words++;
		i = j;
	}
	array[num_words] = NULL;
	return (array - c);
}

int	main()
{
	char a[50] = "cccccholaccccccccccquecctalcrayaccccccc";
	char **ret;
	int i;

	ret = ft_split(a, 'c');
	while(ret[i])
		printf("%s\n", ret[i++]);
	return (0);
}
