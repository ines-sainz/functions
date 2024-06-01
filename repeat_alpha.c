/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 14:22:17 by isainz-r          #+#    #+#             */
/*   Updated: 2024/05/30 15:36:57 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	repeat_alpha(int argc, char **argv)
{
	int	i;
	int	repetition;

	i = 0;
	repetition = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
				repetition = argv[1][i] - 'a' + 1;
			if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
				repetition = argv[1][i] - 'A' + 1;
			while (repetition != 0)
			{
				write(1, &argv[1][i], 1);
				repetition--;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}

/*int	main(int argc, char ** argv)
{
	repeat_alpha(argc, argv);
}*/
