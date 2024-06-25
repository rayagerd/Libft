/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 12:34:56 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/06/25 12:54:10 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <ctype.h>
/*#include <stdio.h>*/

int	ft_isalnum(int c)
{
	if ((c > 64 && c < 90) || (c > 96 && c < 123) || (c > 47 && c < 58))
		return (8);
	else
		return (0);
}
/*
int	main(int argc, char *argv[])
{
	char c;
	c = argv[1][0];
	printf("MY FUNTION: %d\n", ft_isalnum(c));
	printf("isalnum: %d\n", isalnum(c));
	return (0);
}
*/
