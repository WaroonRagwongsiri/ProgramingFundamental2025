/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/17 13:12:26 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/30 20:10:20 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>

#define LINE_SIZE 2048

void	booyer_moore(char *text, char *data);

static int	line_count = 1;

int	main(int ac, char **av)
{
	FILE	*fp;
	char	line[2048];
	char	*word;

	if (ac != 3)
		return (printf("argument must be \"filename\" then \"keyword\""), 1);
	fp = fopen(av[1], "r");
	if (!fp)
		return (perror("Can't open file"), errno);
	word = av[2];
	while (!feof(fp))
	{
		if (!fgets(line, sizeof(line), fp))
			return (perror("Error using fgets"), fclose(fp), errno);
		booyer_moore(word, line);
		line_count++;
	}
	fclose(fp);
	return (0);
}

void	booyer_moore(char *text, char *data)
{
	int	i;
	int	j;
	int	len_data;
	int	len_text;

	len_data = strlen(data);
	len_text = strlen(text);
	if (len_text > len_data || !len_data || !len_text)
		return ;
	i = 0;
	while (i < (len_data - len_text + 1))
	{
		j = len_text;
		while (--j >= 0 && data[i + j] == text[j]);
		if (j < 0)
		{
			printf("found %s at line \"%d\" index %d\n", text, line_count, (i + 1));
			i += len_text;
			continue ;
		}
		i += len_text - j;
	}
}
