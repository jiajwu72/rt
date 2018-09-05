/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_inttabdel.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarella <jfarella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 14:24:02 by jfarella          #+#    #+#             */
/*   Updated: 2018/05/18 16:45:00 by jfarella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <stdlib.h>

void	ft_inttabdel(int ***tab, int size)
{
	int		**new;
	int		i;

	new = NULL;
	i = -1;
	new = *tab;
	while (++i < size)
		free(new[i]);
	free(new);
	*tab = NULL;
}
