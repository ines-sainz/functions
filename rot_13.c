/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 16:43:48 by isainz-r          #+#    #+#             */
/*   Updated: 2024/06/03 15:31:11 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	rot_13(int argc, char **argv)
{
	int	i;

	i = -1;
	if (argc == 2)
	{
		while (argv[1][++i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
					argv[1][i] = argv[1][i] + 13;
				else
					argv[1][i] = (argv[1][i] - 13);
			}
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
					argv[1][i] = argv[1][i] + 13;
				else
					argv[1][i] = argv[1][i] - 13;
			}
			write(1, &argv[1][i], 1);
		}
	}
	write(1, "\n", 1);
}

/*int	main(int argc, char **argv)
{
	rot_13(argc, argv);
}*/
