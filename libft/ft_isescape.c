/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isescape.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 10:48:31 by jfarella          #+#    #+#             */
/*   Updated: 2016/11/18 10:50:55 by jfarella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isescape(int c)
{
	if (c == ' ' || c == '\t' || c == '\n' || c == '\v' || c == '\r' || \
			c == '\f')
		return (1);
	else
		return (0);
}
