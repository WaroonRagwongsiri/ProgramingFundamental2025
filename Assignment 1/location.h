/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   location.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:12:33 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/06/30 16:11:41 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOCATION_H
# define LOCATION_H

# include <stdio.h>

# define BUFFER_SIZE 1000000

typedef struct s_location
{
	int		no;
	double	lat;
	double	lon;
	char	place[BUFFER_SIZE];
}	t_location;

#endif