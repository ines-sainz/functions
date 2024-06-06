/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 16:30:43 by isainz-r          #+#    #+#             */
/*   Updated: 2024/06/03 18:34:15 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	max(int *tab, unsigned int len)
{
	unsigned int	i;
	int				max;

	i = 0;
	if (len == 0)
		return (0);
	max = tab[i];
	while (i < len)
	{
		if (max < tab[i])
			max = tab[i];
		i++;
	}
	return (max);
}

/*int main(void)
{
		int	num[] = {1, 6, 3, 2, 5};
		printf("%i", max(num, 5));
}*/
