/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarella <jfarella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 12:31:23 by jfarella          #+#    #+#             */
/*   Updated: 2018/05/06 13:38:51 by jfarella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <rt.h>

void	ft_error_check_file(t_env *env)
{
	ft_putstr_fd("Error in file ", 2);
	ft_putstr_fd(env->parse.file, 2);
	ft_putstr_fd(" at line ", 2);
	ft_putnbr_fd(env->parse.nb_line, 2);
	ft_putstr_fd(".\n", 2);
	exit(1);
}

void	ft_error(void)
{
	ft_putendl("Error scene !");
	exit(1);
}

void	ft_error_file(void)
{
	perror("Error file");
	exit(1);
}

void	ft_error_sdl(void)
{
	ft_putstr("Error : ");
	ft_putendl(SDL_GetError());
	SDL_Quit();
	exit(1);
}
