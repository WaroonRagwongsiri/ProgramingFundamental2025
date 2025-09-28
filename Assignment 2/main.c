/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:12:26 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/29 01:41:49 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

void	booyer_moore(char *text, char *data);

int	main(int ac, char **av)
{
	if (ac != 3)
		return (printf("ac != 2"), 1);
	booyer_moore(av[2], av[1]);
	return (0);
}

void	booyer_moore(char *text, char *data)
{
	FILE	*fp;
	char	buffer[1024];
	char	*word;
	char	*find;
	int		line;


	fp = fopen(data, "r");
	if (!fp)
	{
		perror("fp error");
		exit(errno);
	}
	word = text;
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
