/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/03 20:08:11 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/03 20:49:11 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*array;

	array = malloc(size * nmemb);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, size * nmemb);
	return (array);
}
