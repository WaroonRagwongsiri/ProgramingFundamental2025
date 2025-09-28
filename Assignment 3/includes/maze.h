/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maze.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 21:54:54 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/28 23:48:15 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAZE_H
# define MAZE_H

# include <stdio.h>
# include <string.h>

# define BUFFER_SIZE 1024
# define BOUND_MAP 500

// Map
int		map_width(char *map_file);
int		map_height(char *map_file);
void	parse_map(char *map_file, int map_width,\
	char map[BOUND_MAP][BOUND_MAP]);
void	print_map(char map[BOUND_MAP][BOUND_MAP], int map_height);
int		find_point(char map[BOUND_MAP][BOUND_MAP],\
	int width, int height, char point);

// Solver
int		solver(char map[BOUND_MAP][BOUND_MAP],\
	int width, int height, int cur_pos);
int		can_mv_up(char map[BOUND_MAP][BOUND_MAP],\
	int width, int cur_pos);
int		can_mv_down(char map[BOUND_MAP][BOUND_MAP],\
	int width, int height, int cur_pos);
int		can_mv_left(char map[BOUND_MAP][BOUND_MAP],\
	int width, int cur_pos);
int		can_mv_right(char map[BOUND_MAP][BOUND_MAP],\
	int width, int cur_pos);

// Write Map
int		write_maze(char *out_file, char map[BOUND_MAP][BOUND_MAP], int height);

#endif