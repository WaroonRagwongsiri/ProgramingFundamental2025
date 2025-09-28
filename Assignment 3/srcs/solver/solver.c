/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solver.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 22:45:01 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/28 23:38:58 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maze.h"

int	solver(char map[BOUND_MAP][BOUND_MAP], int width, int height, int cur_pos)
{
	int	cur_row;
	int	cur_col;

	if (cur_pos < 0 || cur_pos >= width * height)
		return (0);
	cur_row = cur_pos / width;
	cur_col = cur_pos % width;
	if (map[cur_row][cur_col] == 'E')
		return (1);
	if (map[cur_row][cur_col] == ' ')
		map[cur_row][cur_col] = '+';
	if (can_mv_up(map, width, cur_pos))
		if (solver(map, width, height, cur_pos - width))
			return (1);
	if (can_mv_down(map, width, height, cur_pos))
		if (solver(map, width, height, cur_pos + width))
			return (1);
	if (can_mv_left(map, width, cur_pos))
		if (solver(map, width, height, cur_pos - 1))
			return (1);
	if (can_mv_right(map, width, cur_pos))
		if (solver(map, width, height, cur_pos + 1))
			return (1);
	map[cur_row][cur_col] = ' ';
	return (0);
}
