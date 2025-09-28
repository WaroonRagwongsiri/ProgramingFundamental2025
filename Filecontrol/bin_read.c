/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin_read.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:07:28 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/15 14:18:37 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(void)
{
	FILE	*fp;
	int		byte_read;
	int		num;

	fp = fopen("bin", "r");
	if (!fp)
		return (1);
	byte_read = 1;
	while (byte_read > 0)
	{
		byte_read = fread(&num, sizeof(&num), 1, fp);
		printf("%d\n", num);
	}
	fclose(fp);
	return (0);
}
