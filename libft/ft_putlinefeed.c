/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putlinefeed.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/18 16:40:28 by jfarella          #+#    #+#             */
/*   Updated: 2017/01/18 16:43:32 by jfarella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

char	*ft_putlinefeed(char *str)
{
	int		i;
	char	*new;

	if (str)
	{
		i = -1;
		new = NULL;
		new = ft_strnew(ft_strlen(str) + 2);
		while (str[++i])
			new[i] = str[i];
		new[i++] = '\n';
		new[i] = '\0';
		return (new);
	}
	return (NULL);
}
