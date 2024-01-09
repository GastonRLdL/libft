/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gasroman <gasroman@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/09 14:10:30 by gasroman          #+#    #+#             */
/*   Updated: 2024/01/09 17:24:52 by gasroman         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;

	i = 0;
	while (s1[i] && s2[i] && i < n)
	{
		if (s1[i] != s2[i])
			return (s2[i] - s1[i]);
		i++;
	}
	return (0);
}

//  int main()
//  {
// 	char *s1 = "hola   ";
// 	char *s2 = "hola";

// 	printf("la diferencia es: %d\n", strncmp(s1, s2, 2));
// 	printf("la diferencia es: %d\n", strncmp(s1, s2, 2));
// 	return (0);
//  }