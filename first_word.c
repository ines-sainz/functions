/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 09:14:51 by isainz-r          #+#    #+#             */
/*   Updated: 2024/05/30 14:12:29 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	first_word(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while ((argv[1][i] == ' ' || argv[1][i] == 9) && argv[1][i])
			i++;
		while (!(argv[1][i] == ' ' || argv[1][i] == 9) && argv[1][i])
		{
			write(1, &argv[1][i], 1);
			i++;
		}
		while (argv[1][i])
			i++;
	}
	write(1, "\n", 1);
}

/*int	main(int argc, char **argv)
{
	first_word(argc, argv);
}*/
