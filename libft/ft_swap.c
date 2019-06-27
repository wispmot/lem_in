/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwispmot <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 16:25:14 by nwispmot          #+#    #+#             */
/*   Updated: 2019/05/29 16:25:21 by nwispmot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(long *a, long *b)
{
	long temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
