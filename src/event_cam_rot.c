/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_cam_rot.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klin <klin@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/23 16:11:25 by klin              #+#    #+#             */
/*   Updated: 2018/05/23 16:11:38 by klin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rt.h"

static void	ft_rot_angle_z(t_env *env)
{
	if (env->sdl.event.key.keysym.sym == SDLK_y)
	{
		env->cam.angles.y += 3;
		ft_refresh(env);
	}
	if (env->sdl.event.key.keysym.sym == SDLK_h)
	{
		env->cam.angles.y -= 3;
		ft_refresh(env);
	}
}

static void	ft_rot_angle_x(t_env *env)
{
	if (env->sdl.event.key.keysym.sym == SDLK_t)
	{
		env->cam.angles.x += 3;
		ft_refresh(env);
	}
	if (env->sdl.event.key.keysym.sym == SDLK_g)
	{
		env->cam.angles.x -= 3;
		ft_refresh(env);
	}
}

void		ft_rot_cam(t_env *env)
{
	if (env->sdl.event.key.keysym.sym == SDLK_u)
	{
		env->cam.angles.z += 3;
		ft_refresh(env);
	}
	if (env->sdl.event.key.keysym.sym == SDLK_j)
	{
		env->cam.angles.z -= 3;
		ft_refresh(env);
	}
	ft_rot_angle_x(env);
	ft_rot_angle_z(env);
}

void		ft_intensite(t_env *env)
{
	if (env->sdl.event.key.keysym.sym == SDLK_p && env->intensite < 1.8)
	{
		env->intensite += 0.1;
		ft_refresh(env);
	}
	if (env->sdl.event.key.keysym.sym == SDLK_l && env->intensite > 0.4)
	{
		env->intensite -= 0.1;
		ft_refresh(env);
	}
}
