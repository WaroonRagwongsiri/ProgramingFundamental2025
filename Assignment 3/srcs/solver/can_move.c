/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   can_move.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 23:00:59 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/29 00:04:51 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maze.h"

int	can_mv_up(char map[BOUND_MAP][BOUND_MAP], int width, int cur_pos)
{
	int	cur_row;
	int	cur_col;

	cur_row = cur_pos / width;
	cur_col = cur_pos % width;
	if (cur_row == 0)
		return (0);
	if (toupper(map[cur_row - 1][cur_col]) == ' ' || toupper(map[cur_row - 1][cur_col]) == 'E')
		return (1);
	return (0);
}

int	can_mv_down(char map[BOUND_MAP][BOUND_MAP], int width, int height,\
	int cur_pos)
{
	int	cur_row;
	int	cur_col;

	cur_row = cur_pos / width;
	cur_col = cur_pos % width;
	if (cur_row == height - 1)
		return (0);
	if (toupper(map[cur_row + 1][cur_col]) == ' ' || toupper(map[cur_row + 1][cur_col]) == 'E')
		return (1);
	return (0);
}

int	can_mv_left(char map[BOUND_MAP][BOUND_MAP], int width, int cur_pos)
{
	int	cur_row;
	int	cur_col;

	cur_row = cur_pos / width;
	cur_col = cur_pos % width;
	if (cur_col == 0)
		return (0);
	if (toupper(map[cur_row][cur_col - 1]) == ' ' || toupper(map[cur_row][cur_col - 1]) == 'E')
		return (1);
	return (0);
}

int	can_mv_right(char map[BOUND_MAP][BOUND_MAP], int width, int cur_pos)
{
	int	cur_row;
	int	cur_col;

	cur_row = cur_pos / width;
	cur_col = cur_pos % width;
	if (cur_col == width - 1)
		return (0);
	if (toupper(map[cur_row][cur_col + 1]) == ' ' || toupper(map[cur_row][cur_col + 1]) == 'E')
		return (1);
	return (0);
}
