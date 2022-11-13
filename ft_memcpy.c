/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groman-l <groman-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:19:30 by groman-l          #+#    #+#             */
/*   Updated: 2022/11/05 15:55:18 by groman-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*new;

	new = (char *)src;
	if (!dst && !src)
		return (0);
	i = 0;
	while (i < n)
	{
		((char *)dst)[i] = new[i];
		i++;
	}
	return (dst);
}
