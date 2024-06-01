/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 14:44:32 by isainz-r          #+#    #+#             */
/*   Updated: 2024/06/01 11:21:33 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

char	*ft_strrev(char	*str)
{
	int		i;
	int		str_len;
	char	c;

	str_len = all_len(str);
	str_len--;
	i = 0;
	while (i <= str_len)
	{
		c = str[i];
		str[i] = str[str_len];
		str[str_len] = c;
		i++;
		str_len--;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "hola que tal";
	printf("%s", ft_strrev(str));
}
