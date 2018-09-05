/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   event_obj.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarella <jfarella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/26 14:45:50 by jfarella          #+#    #+#             */
/*   Updated: 2018/05/29 11:24:54 by jfarella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void	ft_ev_col(t_env *env)
{
	ft_ev_col_rl(env);
	ft_ev_col_dub(env);
	ft_ev_col_return1(env);
}

void	ft_ev_pos(t_env *env)
{
	ft_ev_pos_rl(env);
	ft_ev_pos_dub(env);
	ft_ev_pos_return1(env);
}

void	ft_ev_dir(t_env *env)
{
	ft_ev_dir_rl(env);
	ft_ev_dir_dub(env);
	ft_ev_dir_return1(env);
}

void	ft_ev_obj(t_env *env)
{
	ft_ev_obj_duret(env);
	ft_ev_obj_rb(env);
	ft_ev_obj_l(env);
	ft_ev_obj_u(env);
}

void	ft_ev_at(t_env *env)
{
	ft_ev_at_dubrl(env);
	ft_ev_at_return1(env);
}
