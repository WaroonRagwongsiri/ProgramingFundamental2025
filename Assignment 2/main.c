/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:12:26 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/29 00:24:10 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	main(int ac, char **av)
{
	FILE	*fp;
	char	buffer[1024];
	char	*word;
	char	*find;
	int		line;

	if (ac != 3)
		return (printf("ac != 2"), 1);
	fp = fopen(av[1], "r");
	if (!fp)
		return (printf("fp error"), 1);
	word = av[2];
	line = 1;
	while (!feof(fp))
	{
		fgets(buffer, sizeof(buffer), fp);
		find = strstr(buffer, word);
		while (find)
		{
			printf("Found %s at line %d, position %ld.\n", word, line, find - buffer);
			find = strstr(&find[strlen(word)], word);
		}
		line++;
	}
}
