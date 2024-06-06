/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:46:20 by isainz-r          #+#    #+#             */
/*   Updated: 2024/06/03 15:32:18 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		if (ft_strchr(s2, s1[i]))
			return ((char *)&s1 [i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char	*s1 = "hola";
	char	*s2 = "qwelm";

	printf("%s", ft_strpbrk(s1, s2));
}*/
