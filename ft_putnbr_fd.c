/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgerdzhi <rgerdzhi@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 03:16:14 by rgerdzhi          #+#    #+#             */
/*   Updated: 2024/07/14 03:24:34 by rgerdzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*nbr;

	nbr = ft_itoa(n);
	ft_putstr_fd(nbr, fd);
}
/*
int	main()
{
	int n;

	n = -2147483649;
	ft_putnbr_fd(n, 1);
	return (0);
}
*/
