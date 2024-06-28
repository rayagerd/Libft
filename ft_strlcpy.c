/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/27 22:17:44 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/06/28 18:22:04 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
/*#include <stdio.h>*/

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	counter;
	size_t	srcsize;

	srcsize = 0;
	while (src[srcsize] != '\0')
		srcsize++;
	if (size != 0)
	{
		counter = 0;
		while (src[counter] != '\0' && counter < (size - 1))
		{
			dst[counter] = src[counter];
			counter++;
		}
		dst[counter] = '\0';
	}
	return (srcsize);
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
