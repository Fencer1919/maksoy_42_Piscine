/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 16:47:44 by maksoy            #+#    #+#             */
/*   Updated: 2021/12/15 16:48:21 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	i;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	ptr = (int *)malloc(sizeof(**range) * (max - min));
	if (!ptr)
		return (0);
	i = 0;
	while (min < max)
	{
		ptr[i++] = min;
		min++;
	}
	*range = ptr;
	return (i);
}
