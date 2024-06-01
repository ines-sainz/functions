/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 15:39:39 by isainz-r          #+#    #+#             */
/*   Updated: 2024/05/30 15:47:10 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	rev_print(int argc, char **argv)
{
	int	len;

	len = 0;
	if (argc == 2)
	{
		len = strlen_with_null(argv[1]);
		while (len >= 0)
		{
			write(1, &argv[1][len], 1);
			len--;
		}
	}
	write(1, "\n", 1);
}

/*int	main(int argc, char **argv)
{
	rev_print(argc, argv);
}*/
