/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 22:10:15 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/28 22:44:28 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maze.h"

void	parse_map(char *map_file, int map_width, char map[BOUND_MAP][BOUND_MAP])
{
	char	buffer[BUFFER_SIZE];
	FILE	*fp;
	int		row;

	fp = fopen(map_file, "r");
	if (!fp)
		return ;
	row = 0;
	while (!feof(fp))
	{
		fgets(buffer, sizeof(buffer), fp);
		strncat(map[row], buffer, map_width);
		row++;
	}
	fclose(fp);
}
