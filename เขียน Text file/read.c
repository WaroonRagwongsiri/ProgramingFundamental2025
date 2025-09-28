/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:24:58 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/15 15:25:16 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	FILE	*fp;
	char	player[20];
	int		level;
	int		score;

	fp = fopen("player.txt", "r");
	if (!fp)
		return (1);
	while (!feof(fp))
	{
		fscanf(fp, "%s\t%d\t%d\n", player, &level, &score);
		printf("Player : %s\nLevel : %d\nScore : %d\n\n", player, level, score);
	}
	fclose(fp);
	return (0);
}
// c42 read.c