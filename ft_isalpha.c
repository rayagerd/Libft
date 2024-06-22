/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/22 20:51:17 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/06/22 21:34:46 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c > 64 && c < 90 || c > 96 && c < 123)
		return(1024);
	else
		return(0);
}


int	main(int argc, char *argv[])
{
	char c;
	c = argv[1][0];
	printf("MY FUNTION: %d\n", ft_isalpha(c));
	printf("isalph: %d\n", isalpha(c));
	return (0);
}
