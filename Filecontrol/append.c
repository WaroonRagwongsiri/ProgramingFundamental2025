/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:33:04 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/15 13:56:52 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(int ac, char **av)
{
	FILE	*fp;
	int		i;

	if (ac < 2)
		return (0);
	fp = fopen("test.txt", "a");
	if (!fp)
		return (1);
	i = 0;
	while (++i < ac)
		fprintf(fp, "%s\t", av[i]);
	fprintf(fp, "\n");
	fclose(fp);
	return (0);
}
