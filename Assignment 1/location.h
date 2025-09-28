/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   location.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/30 15:12:33 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/29 02:06:44 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOCATION_H
# define LOCATION_H

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

// Split
char	**ft_split(char const *s, char c);
size_t	count_word_split(char const *s, char c);
void	*free_arr(char **arr);
char	**process_split(char const *s, char c, char **new, size_t i);
void	inner_loop_split(char const *s, size_t last_index_sep,\
			size_t index_sep, char *new);

# define BUFFER_SIZE 1024
# define CMD_LIM 1000

#endif