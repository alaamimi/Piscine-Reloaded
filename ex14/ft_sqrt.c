/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alaamimi <alaamimi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 16:19:06 by alaamimi          #+#    #+#             */
/*   Updated: 2021/02/10 16:21:44 by alaamimi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int sqrt;

	sqrt = 0;
	while (sqrt <= nb / 2)
	{
		if ((sqrt * sqrt) == nb)
			return(nb);
		else
			sqrt++;
	}
	return (0);
}
