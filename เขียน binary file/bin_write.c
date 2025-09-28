/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin_write.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:57:39 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/15 15:20:32 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct s_player
{
	char	player[20];
	int		level;
	int		score;
} t_player;

int	main(int ac, char **av)
{
	FILE		*fp;
	t_player	player;
	int			i;
	int			j;

	if (ac != 16)
		return (0);
	fp = fopen("player", "w");
	i = -1;
	j = 1;
	while (++i < 5)
	{
		memset(player.player, 0, sizeof(player.player));
		strcat(player.player, av[j++]);
		player.level = atol(av[j++]);
		player.score = atol(av[j++]);
		fwrite(&player, sizeof(t_player), 1, fp);
	}
	fclose(fp);
	return (0);
}
// c42 bin_write.c
// p1 1 1 p2 2 2 p3 3 3 p4 4 4 p5 5 5