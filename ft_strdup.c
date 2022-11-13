/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groman-l <groman-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:05:29 by groman-l          #+#    #+#             */
/*   Updated: 2022/11/11 17:44:19 by groman-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	ssize_t	i;
	char	*ptr;

	i = -1;
	ptr = (char *)malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (!ptr)
		return (NULL);
	ptr[ft_strlen(s1)] = '\0';
	while (s1[++i])
		ptr[i] = s1[i];
	return (ptr);
}
