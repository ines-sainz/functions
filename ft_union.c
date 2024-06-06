/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_union.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/05 16:06:17 by isainz-r          #+#    #+#             */
/*   Updated: 2024/06/05 18:38:47 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

static int	ft_repetition_arg_two(char **argv, int i)
{
	int	repetition;
	int	j;

	repetition = 0;
	j = 0;
	while (argv[1][j])
	{
		if (argv[2][i] == argv[1][j])
			repetition++;
		j++;
	}
	j = 0;
	while (j < i)
	{
		if (argv[2][j] == argv[2][i])
			repetition++;
		j++;
	}
	return (repetition);
}

void	ft_union(int argc, char **argv)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	if (argc == 3)
	{
		while (argv[1][i])
		{
			j = 0;
			while (argv[1][j] && argv[1][j] != argv[1][i])
				j++;
			if (i == j)
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			if (ft_repetition_arg_two(argv, i) == 0)
				write(1, &argv[2][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
}

/*int main(int argc, char **argv)
{
		ft_union(argc, argv);
}*/
