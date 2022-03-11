/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maksoy <42istanbul.com.tr>                 +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:46:04 by maksoy            #+#    #+#             */
/*   Updated: 2021/12/15 15:46:07 by maksoy           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*res;
	int		i;

	i = -1;
	res = malloc(sizeof(*src));
	if (res == 0)
		return (0);
	while (src[++i] != '\0')
		res[i] = src[i];
	res[i] = '\0';
	return (res);
}
