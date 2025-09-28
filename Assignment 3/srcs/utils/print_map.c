/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 22:31:20 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/28 22:41:27 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maze.h"

void	print_map(char map[BOUND_MAP][BOUND_MAP], int map_height)
{
	int	row;

	row = 0;
	while (row < map_height)
	{
		printf("%s\n", map[row]);
		row++;
	}
}
