/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 12:09:41 by isainz-r          #+#    #+#             */
/*   Updated: 2024/06/05 17:12:58 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	inter(int argc, char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			if (ft_strchr(argv[2], argv[1][i]))
			{
				j = 0;
				while (argv[1][j] && argv[1][i] != argv[1][j])
					j++;
				if (j == i)
					write(1, &argv[1][i], 1);
			}
			i++;
		}
	}
	write(1, "\n", 1);
}

/*int	main(int argc, char **argv)
{
		inter(argc, argv);
}*/
