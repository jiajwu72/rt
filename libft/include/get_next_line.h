/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarella <jfarella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/12 10:27:28 by jfarella          #+#    #+#             */
/*   Updated: 2018/05/12 13:55:48 by jfarella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 9999

int		get_next_line(const int fd, char **line);
int		ft_readbuff(char *buff, char **rest, char **line);
int		ft_readrest(char **rest, char **line);

#endif
