/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 22:17:44 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/08 17:57:57 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	while (src[len] != '\0')
		len++;
	if (size != 0)
	{
		i = 0;
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
/*
int main() 
{
    char dst[20];
    const char src[] = "Hello7777!";
    
    size_t result = ft_strlcpy(dst, src, sizeof(dst));
    
    printf("Copied string: %s\n", dst);
    printf("Length of source string: %zu\n", result);
    
    return 0;
}
*/
