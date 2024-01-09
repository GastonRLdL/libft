/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasroman <gasroman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 22:19:55 by gasroman          #+#    #+#             */
/*   Updated: 2024/01/09 22:30:55 by gasroman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((void *)str + i);
		i++;
	}
	return (NULL);
}

// int main() {
//     char str[] = "Hello, World!";
//     char *result = ft_memchr(str, 'W', sizeof(str));

//     if (result != NULL) 
//         printf("Found character 'W' at index: %ld\n", result - str);
// 	else 
// 		printf("Character not found.\n");
//         return 0;
// }