/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thread.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarella <jfarella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 11:47:38 by jfarella          #+#    #+#             */
/*   Updated: 2018/05/23 12:58:16 by jfarella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

t_env		*ft_init_browse_pixels(t_env *env)
{
	ft_init_draw(env);
	ft_init_start(env);
	ft_calc_angles(env);
	SDL_SetRenderTarget(env->sdl.rend, env->sdl.draw);
	SDL_RenderClear(env->sdl.rend);
	SDL_SetRenderTarget(env->sdl.rend, NULL);
	SDL_LockTexture(env->sdl.draw, NULL, &env->sdl.tmp, &env->sdl.pitch);
	SDL_SetRenderTarget(env->sdl.rend, env->sdl.draw);
	env->sdl.pixels = env->sdl.tmp;
	return (env);
}

int			thread(void *envt)
{
	t_env		*env;

	env = (t_env *)envt;
	env->sdl.pos.y = env->thread.y_start;
	while (++env->sdl.pos.y < env->thread.y_end)
	{
		env->sdl.pos.x = env->thread.x_start;
		while (++env->sdl.pos.x < env->thread.x_end)
		{
			ft_init_pixel(env);
			ft_browse_list(env, env->cam.pixel, env->cam.pos, 0);
			if (env->tmp.solution >= 0)
			{
				env->tmp.ray_pos = env->cam.pos;
				env->tmp.ray_dir = env->cam.pixel;
				ft_option_visu(env);
				env->sdl.pixels[env->sdl.pos.x + (env->sdl.pos.y * WIDTHR)] =\
					SDL_MapRGBA(env->sdl.format, env->tmp.color.red, \
					env->tmp.color.green, env->tmp.color.blue, 255);
			}
		}
	}
	env->thread.finished = 1;
	return (1);
}

void		init_limits(t_env *env)
{
	env->thread.size = HEIGHT / 8;
	env->thread.x_start = -1;
	env->thread.x_end = WIDTHR;
	env->thread.y_start = env->thread.id * env->thread.size - 1;
	env->thread.y_end = (env->thread.id + 1) * env->thread.size;
}

void		ft_browse_pixels(t_env *env)
{
	t_env	*e[8];
	int		i;

	i = -1;
	env = ft_init_browse_pixels(env);
	while (++i < 8)
	{
		e[i] = dup_struct(env, i);
		init_limits(e[i]);
	}
	env->thread.t[0] = SDL_CreateThread(thread, "thread1", e[0]);
	env->thread.t[1] = SDL_CreateThread(thread, "thread2", e[1]);
	env->thread.t[2] = SDL_CreateThread(thread, "thread3", e[2]);
	env->thread.t[3] = SDL_CreateThread(thread, "thread4", e[3]);
	env->thread.t[4] = SDL_CreateThread(thread, "thread5", e[4]);
	env->thread.t[5] = SDL_CreateThread(thread, "thread6", e[5]);
	env->thread.t[6] = SDL_CreateThread(thread, "thread7", e[6]);
	env->thread.t[7] = SDL_CreateThread(thread, "thread8", e[7]);
	i = -1;
	while (++i < 8)
		SDL_WaitThread(env->thread.t[i], &e[i]->thread.finished);
	i = -1;
	while (++i < 8)
		thread_suppr_dup(e[i]);
	SDL_UnlockTexture(env->sdl.draw);
}
