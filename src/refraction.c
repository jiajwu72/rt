/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   refraction.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarella <jfarella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/01 20:30:07 by jfarella          #+#    #+#             */
/*   Updated: 2018/06/01 20:32:41 by jfarella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

static t_vect	vect_inv(t_vect old)
{
	t_vect	new;

	new.x = -old.x;
	new.y = -old.y;
	new.z = -old.z;
	return (new);
}

void			ft_refraction(t_env *env)
{
	double	n1;
	double	n2;
	double	cos1;
	double	cos2;
	t_vect	ray_dir_inv;

	n1 = 1;
	n2 = env->tmp.current->refra == 1 ? env->tmp.current->refra :
	1 + env->tmp.current->refra / 150;
	env->tmp.ray_pos = env->light->solution_point;
	ray_dir_inv = vect_inv(env->tmp.ray_dir);
	cos1 = ft_scalar(env->light->normal_vect, ray_dir_inv);
	cos2 = sqrt(1 - pow(n1 / n2, 2) * (1 - pow(cos1, 2)));
	if (cos1 > 0)
		env->tmp.ray_dir = ft_vect_op(ft_vect_op2((n1 / n2), '*',\
				env->tmp.ray_dir), '+', ft_vect_op2((n1 / n2) * cos1 - cos2,\
				'*', env->light->normal_vect));
	else
		env->tmp.ray_dir = ft_vect_op(ft_vect_op2((n1 / n2), '*',\
				env->tmp.ray_dir), '+', ft_vect_op2((n1 / n2) * cos1 + cos2,\
				'*', env->light->normal_vect));
	env->tmp.solution = 0;
	ft_browse_list(env, env->tmp.ray_dir, env->tmp.ray_pos, 0);
}
