/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:46:26 by maksoy            #+#    #+#             */
/*   Updated: 2021/12/15 16:47:27 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*ptr;
	int		temp;

	temp = min;
	if (min >= max)
		return (0);
	ptr = (int *)malloc(sizeof(int) * (max - min));
	if (!ptr)
		return (0);
	i = 0;
	while (i < (max - min))
	{
		ptr[i++] = temp;
		temp++;
	}
	return (ptr);
}
