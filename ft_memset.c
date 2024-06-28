/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 18:59:46 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/06/28 19:25:34 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include <string.h> 

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	i = 0;
	while (ptr[i] != '\0' && i < n)
	{
		ptr[i] = c;
		i++;
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
