/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 11:39:40 by isainz-r          #+#    #+#             */
/*   Updated: 2024/06/03 15:25:49 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	do_op(char *first_number, char *sign, char *second_number)
{
	int	number1;
	int	number2;
	int	result;

	number1 = ft_atoi(first_number);
	number2 = ft_atoi(second_number);
	if (sign[0] == '+')
		result = number1 + number2;
	if (sign[0] == '-')
		result = number1 - number2;
	if (sign[0] == '*')
		result = number1 * number2;
	if (sign[0] == '/')
		result = number1 / number2;
	if (sign[0] == '%')
		result = number1 % number2;
	ft_putnbr(result);
}

/*int main(void)
{
	do_op("6", "+", "3");
	write(1, "\n", 1);
	do_op("6", "-", "3");
	write(1, "\n", 1);
	do_op("6", "*", "3");
	write(1, "\n", 1);
	do_op("6", "/", "3");
	write(1, "\n", 1);
	do_op("6", "%", "3");
	write(1, "\n", 1);
}*/
