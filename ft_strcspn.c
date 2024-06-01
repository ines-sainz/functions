/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/31 12:25:04 by isainz-r          #+#    #+#             */
/*   Updated: 2024/05/31 12:42:55 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (ft_strchr(reject, s[i]))
			return (i);
		i++;
	}
	return (i);
}

/*int	main(void)
{
	char	*s = "holarhola";
	char	*reject = "aloh";

	printf("%zu", ft_strcspn(s, reject));
}*/
