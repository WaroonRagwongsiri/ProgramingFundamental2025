/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/04 14:47:02 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/08/04 14:53:04 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stdio.h"

int	sol(int step);

int	main(void)
{
	int	step;
	int	ans;

	step = 10;
	ans = sol(step);
	printf("ans = %d\n",ans);
}

int	sol(int step)
{
	if (step <= 0)
		return 0;
	if (step == 1)
		return 1;
	else if (step == 2)
		return 2;
	else
		return sol(step - 1) + sol(step - 2);
}
