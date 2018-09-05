/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_digits.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarella <jfarella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 16:38:07 by jfarella          #+#    #+#             */
/*   Updated: 2018/05/29 16:17:18 by klin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

char	*ft_get_digits(char *str)
{
	char	*new;
	int		i;
	int		j;

	j = 0;
	i = 0;
	new = NULL;
	while (str[i] && (str[i] < '0' || str[i] > '9'))
		i++;
	j = i;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
		i++;
	if ((new = (char *)malloc(sizeof(char) * ((i - j) + 1))) == NULL)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i] && (str[i] < '0' || str[i] > '9'))
		i++;
	while (str[i] >= '0' && str[i] <= '9' && str[i])
		new[j++] = str[i++];
	new[j] = '\0';
	return (new);
}
