/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   thread_suppr_dup.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarella <jfarella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/21 14:59:50 by jfarella          #+#    #+#             */
/*   Updated: 2018/05/23 16:30:39 by jfarella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void	suppr_dup_tmp(t_tmp src)
{
	ft_free_obj(src.current);
}

void	suppr_dup_set(t_set src)
{
	int		i;

	i = -1;
	while (++i < 4)
	{
		if (src.obj[i])
			ft_free_obj(src.obj[i]);
	}
}

void	thread_suppr_dup(t_env *env)
{
	ft_free_obj(env->obj);
	ft_free_light(env->light);
	if (env)
	{
		free(env);
		env = NULL;
	}
}
