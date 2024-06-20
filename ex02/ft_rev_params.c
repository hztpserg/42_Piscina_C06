/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 14:27:50 by seantoni          #+#    #+#             */
/*   Updated: 2023/11/03 14:40:39 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *param)
{
	int	i;

	i = 0;
	while (param[i] != 0)
	{
		write(1, &param[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	argc--;
	while (argc > 0)
	{
		ft_putchar(argv[argc]);
		argc--;
	}
	return (0);
}
