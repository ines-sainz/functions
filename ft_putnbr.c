/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 11:02:47 by isainz-r          #+#    #+#             */
/*   Updated: 2024/05/30 14:12:55 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	ft_putnbr(int number)
{
	int	div_n;
	int	to_write;

	if (number == INT_MIN)
		write(1, "-2147483648", 11);
	if (number > INT_MIN && number <= INT_MAX)
	{
		if (number < 0)
		{
			number = -number;
			write(1, "-", 1);
		}
		div_n = number / 10;
		if (number >= 10)
			ft_putnbr(div_n);
		to_write = ((number % 10) + '0');
		write(1, &to_write, 1);
	}
}

/*int main(void)
{
	ft_putnbr(1234567890);
}*/
