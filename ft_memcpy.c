/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/26 18:55:43 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/06/27 17:59:58 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
/*#include <stdio.h>*/

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			counter;

	if (!dest && !src)
		return (0);
	counter = 0;
	while (counter < n)
	{
		((char *)dest)[counter] = ((const char *)src)[counter];
		counter++;
	}
	return (dest);
}
/*
int	main()
{
	char src[10] = "Hellooooo!";
	char dest[10];
	ft_memcpy(dest, src, 6);
	dest[6] = '\0';
	printf("Destination: %s\n", dest);
	return 0;
}
*/
