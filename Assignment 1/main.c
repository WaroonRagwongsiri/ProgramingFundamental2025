/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:26:22 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/10/01 13:03:25 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "location.h"

int	main(void)
{
	FILE	*fp_csv;
	FILE	*fp_curl;
	FILE	*fp_out;
	char	line[1024];
	int		wc;
	char	**data;
	int		i;
	char	place[1024];
	char	cmd[100];

	fp_csv = fopen("latlonfile.csv", "r");
	fp_out = fopen("68011008", "w");
	if (!fp_csv || !fp_out)
		return (fclose(fp_csv), fclose(fp_out), 1);
	fgets(line, sizeof(line), fp_csv);
	fprintf(fp_out, "%s", line);
	while (!feof(fp_csv))
	{
		if (!fgets(line, sizeof(line), fp_csv))
			return (fclose(fp_csv), fclose(fp_out), 1);
		wc = count_word_split(line, ',');
		data = ft_split(line, ',');
		if (!data)
			return (fclose(fp_csv), fclose(fp_out), 1);
		if (wc == 4)
		{
			memset(cmd, 0, 100);
			strcat(cmd, "./curl.sh ");
			strcat(cmd, data[1]);
			strcat(cmd, " ");
			strcat(cmd, data[2]);
			system(cmd);
			fp_curl = fopen("out_curl", "r");
			if (!fp_curl)
				return (fclose(fp_csv), fclose(fp_out), free_arr(data), 1);
			fgets(place, sizeof(place), fp_curl);
			line[strlen(line) - 1] = '\0';
			place[strlen(place) - 1] = '\0';
			fprintf(fp_out, "%s", line);
			fprintf(fp_out, "%s,\n", place);
			fclose(fp_curl);
		}
		else
			fprintf(fp_out, "%s", line);
		free_arr(data);
	}
	return (fclose(fp_csv), fclose(fp_out), 0);
}
