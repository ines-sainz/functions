/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 10:46:00 by isainz-r          #+#    #+#             */
/*   Updated: 2024/06/03 15:25:19 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	alpha_mirror(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 'a' && argv[1][i] <= 'm')
				argv[1][i] = 122 - (argv[1][i] - 97);
			else if (argv[1][i] >= 'n' && argv[1][i] <= 'z')
				argv[1][i] = 97 + (122 - argv[1][i]);
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'M')
				argv[1][i] = 90 - (argv[1][i] - 65);
			else if (argv[1][i] >= 'N' && argv[1][i] <= 'Z')
				argv[1][i] = 65 + (90 - argv[1][i]);
			write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

/*int main(int argc, char **argv)
{
	alpha_mirror(argc, argv);
}*/
