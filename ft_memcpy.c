/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasroman <gasroman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 19:19:00 by gasroman          #+#    #+#             */
/*   Updated: 2024/01/10 16:29:25 by gasroman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = (char *)src;
	if (!dst && !src)
		return (0);
	while (i < n)
	{
		((char *)dst)[i] = str[i];
		i++;
	}
	return (dst);
}

// int main()
// {
//     char source[] = "Hello, World!";
//     char destination[20];

//     printf("Copied string: %s\n", ft_memcpy(destination, source, sizeof(source)));
//     return 0;
// }
