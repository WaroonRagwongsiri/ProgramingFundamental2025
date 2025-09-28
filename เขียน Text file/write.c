/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:24:58 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/15 15:26:36 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	FILE	*fp;
	char	player[20];
	int		level;
	int		score;
	int		i;
	int		j;

	if (ac != 16)
		return (1);
	fp = fopen("player.txt", "w");
	if (!fp)
		return (1);
	i = -1;
	j = 1;
	while (++i < 5)
	{
		memset(player, 0, sizeof(player));
		strcat(player, av[j++]);
		level = atol(av[j++]);
		score = atol(av[j++]);
		fprintf(fp, "%s %d %d\n", player, level, score);
	}
	fclose(fp);
	return (0);
}
// c42 write.c
// p1 1 1 p2 2 2 p3 3 3 p4 4 4 p5 5 5