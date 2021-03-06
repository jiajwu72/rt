/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfarella <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 13:02:08 by jfarella          #+#    #+#             */
/*   Updated: 2017/01/31 13:06:35 by jfarella         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_pow(int nb, int pow)
{
	if (pow == 0)
		return (1);
	return (nb * ft_pow(nb, pow - 1));
}
