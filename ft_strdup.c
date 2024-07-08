/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 12:46:48 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/08 17:51:06 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*d;

	i = 0;
	while (s[i])
		i++;
	d = (char *)malloc(sizeof(char) * (i + 1));
	if (d == NULL)
		return (NULL);
	i = 0;
	while (s[i])
	{
		d[i] = s[i];
		i++;
	}
	d[i] = '\0';
	return (d);
}
/*
int	main()
{
	const char	dst[] = "12334*6ybki0";
	char	*result;
	char	*mine;
	result = strdup(dst);
	printf("ctrl: %s\n", result);
	mine = ft_strdup(dst);
	printf("mine: %s\n", mine);
	free(result);
	free(mine);
	return (0);
}
*/
