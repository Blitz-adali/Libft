/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaalali <raad.ali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/23 22:25:27 by raaalali          #+#    #+#             */
/*   Updated: 2025/12/09 14:26:54 by raaalali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	while (*s)
	{
		s++;
		i++;
	}
	if ((char)c == '\0')
		return ((char *)s);
	i--;
	s--;
	while (i > 0)
	{
		if (*s == (char)c)
			return ((char *)s);
		s--;
		i--;
	}
	if (*s == (char)c)
		return ((char *)s);
	return (NULL);
}
