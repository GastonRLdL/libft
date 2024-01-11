/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasroman <gasroman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 18:55:51 by gasroman          #+#    #+#             */
/*   Updated: 2024/01/11 19:11:34 by gasroman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	j;

	str = (malloc(ft_strlen(s1) + (ft_strlen(s2)) + 1));
	if (!str)
		return (0);
	i = 0;
	j = 0;
	while (s1[j])
	{
		str[i] = s1[j];
		i++;
		j++;
	}
	j = 0;
	while (s2[j])
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

// int main()
// {
//     char *s1 = "Hello, ";
//     char *s2 = "world!";
//     char *result = ft_strjoin(s1, s2);
//     if (result)
//         printf("Result: %s\n", result);
//     else
//         printf("Memory allocation failed.\n");
//     return 0;
// }