/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/03 15:49:06 by isainz-r          #+#    #+#             */
/*   Updated: 2024/06/03 16:30:12 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	last_word(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = all_len(argv[1]);
		i--;
		while (argv[1][i])
		{
			while (argv[1][i] && (argv[1][i] == 32 || argv[1][i] == 9))
				i--;
			while (argv[1][i] && (!(argv[1][i] == 32 || argv[1][i] == 9)))
				i--;
			i++;
			while (argv[1][i] && (!(argv[1][i] == 32 || argv[1][i] == 9)))
			{
				write(1, &argv[1][i], 1);
				i++;
			}
		}
	}
	write(1, "\n", 1);
}

/*int main(int argc, char **argv)
{
		last_word(argc, argv);
}*/
