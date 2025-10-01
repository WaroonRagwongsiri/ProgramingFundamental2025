/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/28 21:51:00 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/10/01 13:21:51 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "maze.h"

int	main(int argc, char **argv)
{
	static char	map[BOUND_MAP][BOUND_MAP] = {0};
	int			width;
	int			height;
	int			s_point;
	int			e_point;

	if (argc != 2)
	{
		perror("Must have 1 argument");
		return (1);
	}
	width = map_width(argv[1]);
	if (!width || width > BOUND_MAP - 1)
	{
		perror("Invalid Map");
		return (1);
	}
	height = map_height(argv[1]);
	parse_map(argv[1], width, map);
	s_point = find_point(map, width, height, 'S');
	e_point = find_point(map, width, height, 'E');
	if (s_point == -1 || e_point == -1)
	{
		perror("No Start or end point");
		return (1);
	}
	solver(map, width, height, s_point);
	print_map(map, height);
	if (write_maze("out/68011008.txt", map, height))
		printf("Success");
	else
	{
		perror("Write Error");
		return (1);
	}
	return (0);
}
