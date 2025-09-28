/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:33:04 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/15 14:06:23 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	FILE	*fp;
	char	buffer[2];

	if (ac != 2)
		return (0);
	fp = fopen(av[1], "r");
	if (!fp)
		return (1);
	while (!feof(fp))
	{
		fgets(buffer, sizeof(buffer), fp);
		printf("%s", buffer);
	}
	fclose(fp);
	return (0);
}
