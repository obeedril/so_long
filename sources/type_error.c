/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_error.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeedril <obeedril@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 20:27:00 by obeedril          #+#    #+#             */
/*   Updated: 2021/11/28 18:47:24 by obeedril         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

void	type_error_1(int flag)
{
	if (flag == 1)
		write (2, "The map is empty!\n", 19);
	if (flag == 2)
		write(2, "Wrong symbol is on the map!\n", 29);
	if (flag == 3)
		write(2, "Brocken wall!\n", 15);
	if (flag == 4)
		write (2, "Wrong name of the map!\n", 24);
	if (flag == 5)
		write (2, "Are you sure it's a rectangle?\n", 32);
	if (flag == 6)
		write (2, "No player on the map!\n", 23);
}

void	type_error_2(int flag)
{
	if (flag == 7)
		write (2, "No exit on the map!\n", 21);
	if (flag == 8)
		write (2, "No collectibles on the map!\n", 29);
	if (flag == 9)
		write (2, "Too many players on the map!\n", 30);
	if (flag == 10)
		write (2, "Wrong number of arguments!\n", 28);
	if (flag == 11)
		write (2, "Where is a picture?\n", 21);
}

void	type_error(int flag)
{
	if (flag > 0)
	{
		if (flag <= 6)
		{
			write (2, "Error\n", 6);
			type_error_1(flag);
		}
		if (flag > 6)
		{
			write (2, "Error\n", 6);
			type_error_2(flag);
		}
		exit(EXIT_FAILURE);
	}
}
