/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 14:34:22 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/15 14:42:12 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

struct student {
	char name[20];
	char ID[9];
	int age;
}	s;

int	main(void)
{
	FILE	*fptr;
	int		noffset;

	fptr = fopen("StRecord.txt", "r");
	noffset = 1 * sizeof(struct student);
	if (fseek( fptr, noffset, 0) == 0 )
	{
		if (fread(&s, sizeof(struct student), 1, fptr) != 0)
		{
			printf("Name: %s\n", s.name);
			printf("ID: %s and Age: %d\n", s.ID,s.age);
			printf("---------------------------------\n");
		}
	}
	fclose(fptr);
	return (0);
}
