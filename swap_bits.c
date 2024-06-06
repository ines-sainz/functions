/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 18:35:39 by isainz-r          #+#    #+#             */
/*   Updated: 2024/06/05 15:55:50 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

unsigned char	swap_bits(unsigned char octect)
{
	return ((octect >> 4) | (octect << 4));
}

/*int	main(void)
{
		printf("%i\n", swap_bits(7));
		printf("%c\n", swap_bits(7));
}*/
