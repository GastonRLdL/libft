/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasroman <gasroman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 22:31:12 by gasroman          #+#    #+#             */
/*   Updated: 2024/01/09 22:41:38 by gasroman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (s1 && s2)
	{
		while (i < n)
		{
			if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
				return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
			i++;
		}
	}
	return (0);
}

// int main()
// {
//     char str1[] = "Hello";
//     char str2[] = "Hellp";

//     int result = ft_memcmp(str1, str2, sizeof(str1));

//     if (result < 0)
//         printf("str1 is less than str2\n");
//  	else if (result > 0)
//         printf("str1 is greater than str2\n");
//  	else
//         printf("str1 is equal to str2\n");
//     return 0;
// }