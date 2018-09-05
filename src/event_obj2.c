/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_obj2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarella <jfarella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 11:46:33 by jfarella          #+#    #+#             */
/*   Updated: 2018/05/23 20:20:11 by jfarella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void	ft_ev_eff(t_env *env)
{
	ft_ev_eff_rlb(env);
	ft_ev_eff_du(env);
	if (env->sdl.event.key.keysym.sym == SDLK_RETURN)
		ft_ev_eff_return1(env);
}

void	ft_ev_base(t_env *env)
{
	ft_ev_base_rlb(env);
	ft_ev_base_down(env);
	ft_ev_base_up(env);
	if (env->sdl.event.key.keysym.sym == SDLK_RETURN)
		ft_ev_base_return1(env);
}
