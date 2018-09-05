/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cw.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarella <jfarella@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/14 13:17:01 by jfarella          #+#    #+#             */
/*   Updated: 2018/05/16 14:33:40 by jfarella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_cw(const char *s, int c)
{
	int		i;
	int		count;

	if (s && c)
	{
		i = 0;
		count = 0;
		while (s[i])
		{
			while (s[i] == c && s[i])
				i++;
			if (s[i] != '\0')
				count++;
			while (s[i] != c && s[i])
				i++;
		}
		return (count);
	}
	return (0);
}
