/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_maze.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 21:57:14 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/28 22:41:48 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maze.h"

int	map_width(char *map_file)
{
	FILE	*fp;
	char	buffer[BUFFER_SIZE];
	int		line_len;
	int		width;

	fp = fopen(map_file, "r");
	if (!fp)
		return (0);
	width = 0;
	while (!feof(fp))
	{
		fgets(buffer, sizeof(buffer), fp);
		line_len = strlen(buffer);
		if (buffer[line_len - 1] == '\n')
			line_len -= 1;
		if (width == 0)
			width = line_len;
		if (width != line_len)
			return (fclose(fp), 0);
	}
	return (fclose(fp), width);
}

int	map_height(char *map_file)
{
	FILE	*fp;
	char	buffer[BUFFER_SIZE];
	int		height;

	fp = fopen(map_file, "r");
	if (!fp)
		return (0);
	height = 0;
	while (!feof(fp))
	{
		fgets(buffer, sizeof(buffer), fp);
		height++;
	}
	return (fclose(fp), height);
}
