/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   find_point.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 22:46:41 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/10/01 13:20:22 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maze.h"

int	find_point(char map[BOUND_MAP][BOUND_MAP], int width, int height, char point)
{
	int	row;
	int	col;

	row = 0;
	while (row < height)
	{
		col = 0;
		while (col < width)
		{
			if (toupper(map[row][col]) == toupper(point))
				return (row * width + col);
			col++;
		}
		row++;
	}
	return (-1);
}
