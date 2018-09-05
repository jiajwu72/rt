/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reflexion.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sdelhomm <sdelhomm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/19 15:28:59 by sdelhomm          #+#    #+#             */
/*   Updated: 2018/05/29 16:04:43 by klin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void		ft_reflexion(t_env *env)
{
	env->tmp.ray_pos = env->light->solution_point;
	env->tmp.ray_dir = ft_vect_op(env->tmp.ray_dir, '-',\
		ft_vect_op2(2 * ft_scalar(env->light->normal_vect,\
		env->tmp.ray_dir), '*', env->light->normal_vect));
	env->tmp.solution = 0;
	ft_browse_list(env, env->tmp.ray_dir, env->tmp.ray_pos, 0);
}
