/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:26:22 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/28 14:06:31 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "location.h"

int	main(void)
{
	FILE		*fp;
	t_location 	l;
	char		line[256];
	int			result;

	fp = fopen("latlonfile.csv", "r");
	if (!fp) {
		printf("Error opening file\n");
		return 1;
	}
	fscanf(fp, "%*[^\n]\n");
	while (fgets(line, sizeof(line), fp))
	{
		l.place[0] = '\0';
		result = sscanf(line, "%d,%lf,%lf,%[^\n]\n", &l.no, &l.lat, &l.lon, l.place);
		if (result < 3)
			continue ;
		printf("no : %d place : ", l.no);
		if (result < 4 || l.place[0] == '\0')
			printf("No place");
		else
			printf("%s", l.place);
		printf("\n");
	}
	fclose(fp);
	return 0;
}