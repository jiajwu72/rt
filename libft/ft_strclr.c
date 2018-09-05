/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 16:29:30 by jfarella          #+#    #+#             */
/*   Updated: 2016/11/10 16:43:36 by jfarella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *s)
{
	int		i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			s[i] = '\0';
			i++;
		}
		s[i] = '\0';
	}
}