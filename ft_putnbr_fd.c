/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbruneau <lbruneau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 15:51:44 by lbruneau          #+#    #+#             */
/*   Updated: 2026/11/14 18:43:48 by lbruneau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "ft_libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c;

	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
		n = n * -1;
	}
	if (n > 9)
		ft_putnbr_fd(n / 10, 1);
	c = n % 10 + '0';
	write(fd, &c, 1);
}

/*int main()
{
   ft_putnbr_fd(2147483647, 1);
   ft_putnbr_fd(-2147483648, 1);
   ft_putnbr_fd(-12, 1);
   ft_putnbr_fd(0, 1);
   ft_putnbr_fd(12, 1);
}*/
