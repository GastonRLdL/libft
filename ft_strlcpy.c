/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasroman <gasroman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:23:30 by gasroman          #+#    #+#             */
/*   Updated: 2024/01/09 17:24:54 by gasroman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && dst[i] && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

// #include <string.h>
// int main(void)
// {
// 	const char s2[] = "hola pedro";
// 	char s1[] = "";
// 	printf("el largo es: %zu\n", strlcpy("", "", 1));
// 	printf("el largo es: %zu\n", ft_strlcpy("", "", 1));
// 	return(0);
// }