/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 14:33:44 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/08/18 15:24:29 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*uniq(char	*str);
char	*append_n_str(char *old, char *read, size_t index_lf);

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;

	if (argc != 3)
		return (1);
	s1 = NULL;
	s2 = NULL;
	s1 = uniq(argv[1]);
	s2 = uniq(argv[2]);
	if (strcmp(s1, s2) == 0)
		printf("Same\n");
	else
		printf("Not Same\n");
	free(s1);
	free(s2);
	return (0);
}

char	*append_n_str(char *old, char *read, size_t n)
{
	char	*new;
	size_t	len_old;

	len_old = strlen(old);
	new = calloc((len_old + n + 1), 1);
	if (!new)
	{
		free(old);
		return (NULL);
	}
	strlcat(new, old, len_old + 1);
	strlcat(new, read, len_old + n + 1);
	free(old);
	return (new);
}

char	*uniq(char	*str)
{
	char	*new;
	size_t	i;
	size_t	len_str;
	char	temp;

	new = NULL;
	new = calloc(1, sizeof(char));
	if (!new)
		return (NULL);
	len_str = strlen(str);	
	i = 0;
	if (len_str == 0)
		return (str);
	temp = '\0';
	while (str[i])
	{
		if (str[i] != temp)
		{
			new = append_n_str(new, &str[i], 1);
			temp = str[i];
			while (str[i] == temp)
			{
				i++;
			}
			i--;
		}
		i++;
	}
	return (new);
}
