/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:59:46 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/06/25 20:42:09 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include <string.h> 

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	counter;
	unsigned char			*ptr;

	ptr = (unsigned char *)s;
	counter = 0;
	while (ptr[counter] != '\0' && counter < n)
	{
		ptr[counter] = c;
		counter++;
	}
	return (s);
}
/*
int	main(int argc, char *argv[]) 
{ 
	char *str = argv[1];	
	printf("Before ft_memset(): %s\n", str);
	//fill 3 bytes with * starting from str[4]
	ft_memset(str + 4, '*', 3);
	printf("After ft_memset): %s\n", str);
       	//fill 3 bytes with a starting from str[4]
	memset(str + 4, 'a', 3);  
	printf("After memset(): %s\n", str);
	return (0); 
} 
*/
