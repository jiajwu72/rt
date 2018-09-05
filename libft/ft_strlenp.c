/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlenp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarella <jfarella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/11 14:00:56 by jfarella          #+#    #+#             */
/*   Updated: 2017/01/11 14:02:57 by jfarella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlenp(char *str)
{
	int		i;

	if (str)
	{
		i = 0;
		while (str[i])
			i++;
		return (i);
	}
	return (0);
}
