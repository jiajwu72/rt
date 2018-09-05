/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_powten.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 11:23:56 by jfarella          #+#    #+#             */
/*   Updated: 2016/11/18 11:31:53 by jfarella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_powten(int n)
{
	int		i;
	int		res;

	res = 1;
	i = 1;
	while (i < n)
	{
		res *= 10;
		i++;
	}
	return (res);
}