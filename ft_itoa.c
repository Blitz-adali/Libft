/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raaalali <raad.ali@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 00:45:15 by raaalali          #+#    #+#             */
/*   Updated: 2025/12/22 09:10:44 by raaalali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_change_i_a(int n, int i, char *ptr)
{
	if (n < 0)
	{
		ptr[0] = '-';
		n *= -1;
	}
	while (n > 0)
	{
		ptr[--i] = n % 10 + '0';
		n /= 10;
	}
	return (ptr);
}

char	*ft_itoa(int n)
{
	char	*ptr;
	int		i;
	int		j;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	j = n;
	if (j == 0)
		i = 1;
	while (j != 0)
	{
		j /= 10;
		i++;
	}
	if (n < 0)
		i++;
	ptr = malloc(i + 1);
	if (!ptr)
		return (NULL);
	ptr[i] = '\0';
	if (n == 0)
		ptr[0] = '0';
	return (ft_change_i_a(n, i, ptr));
}
