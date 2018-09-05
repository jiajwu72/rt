/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   color2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwu <jwu@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/28 22:59:18 by jwu               #+#    #+#             */
/*   Updated: 2018/06/02 19:00:54 by klin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

t_color				color_add(t_color a, t_color b)
{
	a.red += b.red;
	a.green += b.green;
	a.blue += b.blue;
	return (a);
}

t_color				color_mult(t_color c, double a)
{
	c.red *= a;
	c.green *= a;
	c.blue *= a;
	return (c);
}

t_color				color_normalize(t_color c)
{
	c.red = c.red > 255 ? 255 : c.red;
	c.green = c.green > 255 ? 255 : c.green;
	c.blue = c.blue > 255 ? 255 : c.blue;
	return (c);
}

t_color				gere_color(t_color color, t_env *env, t_tmp tmp)
{
	t_color			c;

	c = color_mult(tmp.current->color, env->amb_coef);
	color = color_add(color, c);
	color = color_normalize(color_mult(color, env->intensite));
	return (color);
}

t_color				ft_chose_color2(t_env *env, t_color color, t_color tmp)
{
	if (env->tmp.darkness >= 1)
		color = color_normalize(ft_option_col(env, color));
	color.red = (env->amb == 1) ? color.red * env->amb_coef : color.red;
	color.green = (env->amb == 1) ? color.green * env->amb_coef : color.green;
	color.blue = (env->amb == 1) ? color.blue * env->amb_coef : color.blue;
	color = gere_color(color, env, env->tmp);
	env->tmp.current->color = tmp;
	return (color);
}
