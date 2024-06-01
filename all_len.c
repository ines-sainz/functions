/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   all_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 12:06:59 by isainz-r          #+#    #+#             */
/*   Updated: 2024/06/01 11:56:42 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	all_len(char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i])
		i++;
	return (i);
}

/*int	main(void)
{
	printf("%i\n", strlen_with_null("hola"));
}*/
