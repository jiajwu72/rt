/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strduptoc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarella <jfarella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 10:30:13 by jfarella          #+#    #+#             */
/*   Updated: 2017/02/10 10:30:15 by jfarella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <string.h>
#include <stdlib.h>

char	*ft_strduptoc(char *str, int c)
{
	unsigned char	cc;
	int				i;
	char			*new;

	if (str && c)
	{
		cc = (unsigned char)c;
		i = 0;
		while (str[i] != cc && str[i])
			i++;
		new = ft_strnew(i + 1);
		i = -1;
		while (str[++i] != cc && str[i])
			new[i] = str[i];
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
