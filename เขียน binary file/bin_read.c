/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:57:13 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/15 15:49:49 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

typedef struct s_player
{
	char	player[20];
	int		level;
	int		score;
} t_player;

int	main(void)
{
	FILE		*fp;
	t_player	player;
	int			byte_reads;
	int			i;

	fp = fopen("player", "r");
	if (!fp)
		return (1);
	i = -1;
	while (++i < 5)
	{
		byte_reads = fread(&player, sizeof(t_player), 1, fp);
		if (byte_reads < 0)
			return (fclose(fp), 1);
		printf("Player : %s\nLevel : %d\nScore : %d\n\n", player.player, player.level, player.score);
	}
	fclose(fp);
	return (0);
}
// c42 bin_read.c