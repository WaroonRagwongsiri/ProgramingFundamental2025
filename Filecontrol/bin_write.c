/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bin_write.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:07:28 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/15 14:20:31 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(int ac, char **av)
{
	FILE	*fp;
	int		num;

	if (ac != 2)
		return (0);
	fp = fopen("bin", "a");
	if (!fp)
		return (1);
	num = atol(av[1]);
	fwrite(&num, sizeof(&num), 1, fp);
	fclose(fp);
	return (0);
}
