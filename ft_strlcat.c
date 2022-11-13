/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groman-l <groman-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 01:47:01 by groman-l          #+#    #+#             */
/*   Updated: 2022/11/08 05:49:35 by groman-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	o;

	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	i = ft_strlen(dst);
	o = 0;
	while (src[o] != '\0' && i + 1 < dstsize)
	{
		dst[i] = src[o];
		i++;
		o++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[o]));
}
