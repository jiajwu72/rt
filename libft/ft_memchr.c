/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 14:07:48 by jfarella          #+#    #+#             */
/*   Updated: 2016/11/18 11:09:54 by jfarella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	int				i;
	unsigned char	*str;
	unsigned char	d;

	i = 0;
	str = (unsigned char *)s;
	d = (unsigned char)c;
	while (n--)
	{
		if (str[i] == d)
			return (str + i);
		i++;
	}
	return (NULL);
}
