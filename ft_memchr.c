/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groman-l <groman-l@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/29 13:01:03 by groman-l          #+#    #+#             */
/*   Updated: 2022/11/06 13:14:06 by groman-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;

	src = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)src[i] == (unsigned char) c)
			return ((void *)src + i);
		i++;
	}
	return (NULL);
}

/*int main ()
{
	char *s = "Hinter";
	int c = 'i';
	size_t n  = 4;
	printf ("%s\n", ft_memchr(s, c, n));
	printf ("%s\n", memchr(s, c, n));
	return (0);

}*/
