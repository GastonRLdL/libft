/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groman-l <groman-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:49:32 by groman-l          #+#    #+#             */
/*   Updated: 2022/11/12 01:03:16 by groman-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	strlen;
	char	*str;

	if (!s)
		return (0);
	strlen = ft_strlen(s);
	if (start >= strlen)
		return (ft_strdup(""));
	i = 0;
	if (start + len == strlen + 1 || len > strlen)
		len = strlen - start;
	str = (char *)malloc(len + 1);
	if (!str)
		return (0);
	while (i++ < start)
		s++;
	ft_strlcpy(str, s, len + 1);
	return (str);
}
