/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thread_dup3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarella <jfarella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 13:00:40 by jfarella          #+#    #+#             */
/*   Updated: 2018/05/29 16:15:54 by klin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

t_filters	dup_filters(t_filters filt)
{
	t_filters	new;

	new.bw[0] = filt.bw[0];
	new.bw[1] = filt.bw[1];
	new.bw[2] = filt.bw[2];
	new.mo[0] = filt.mo[0];
	new.mo[1] = filt.mo[1];
	new.mo[2] = filt.mo[2];
	new.neg = filt.neg;
	return (new);
}

void		ft_dup_surf(t_env **dest, t_env *src)
{
	(*dest)->sdl.surf[0] = src->sdl.surf[0];
	(*dest)->sdl.surf[1] = src->sdl.surf[1];
	(*dest)->sdl.surf[2] = src->sdl.surf[2];
	(*dest)->sdl.surf[3] = src->sdl.surf[3];
	(*dest)->sdl.surf[4] = src->sdl.surf[4];
}
