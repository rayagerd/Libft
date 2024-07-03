/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 19:07:29 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/03 17:43:34 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include <string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	b;
	size_t	l;

	if (*little == '\0')
		return ((char *)big);
	b = 0;
	while ((big)[b] != '\0' && b < len)
	{
		l = 0;
		while ((little)[l] && (big)[b + l] &&
			(big)[b + l] == (little)[l] &&
			(b + l) < len)
			l++;
		if ((little)[l] == '\0')
			return (&((char *)big)[b]);
		b++;
	}
	return (NULL);
}
/*
int	main()
{
	const char *largestring = "Hello World";
	const char *smallstring = "World";
	char *ptr;
	
	ptr = ft_strnstr(largestring, smallstring, 6);
	if (ptr)
		printf("ft_strnstr: %s\n", ptr);
	else
		printf("not found\n");
	return (0);
}*/
