/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 23:45:02 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/28 23:54:40 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maze.h"

int	write_maze(char *out_file, char map[BOUND_MAP][BOUND_MAP], int height)
{
	FILE	*fp;
	int		row;

	fp = fopen(out_file, "w");
	if (!fp)
		return (0);
	row = 0;
	while (row < height)
	{
		fprintf(fp, "%s\n", map[row]);
		row++;
	}
	return (fclose(fp), 1);
}