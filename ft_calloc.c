/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaalali <raad.ali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 18:44:31 by raaalali          #+#    #+#             */
/*   Updated: 2025/12/09 14:26:54 by raaalali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	i;
	char	*ptr;

	if (count == 0 || size == 0)
	{
		ptr = malloc(1);
		if (!ptr)
			return (NULL);
		ptr[0] = 0;
	}
	else
	{
		ptr = malloc(count * size);
		i = 0;
		if (!ptr)
			return (NULL);
		while (i < count * size)
		{
			ptr[i] = 0;
			i++;
		}
	}
	return (ptr);
}
