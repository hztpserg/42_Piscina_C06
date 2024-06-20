/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:57:52 by seantoni          #+#    #+#             */
/*   Updated: 2023/11/03 14:22:49 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char	*param)
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
	int	i;

	if (argc < 1)
		return (0);
	i = 1;
	while (argv[i] != 0)
	{
		ft_putchar(argv[i]);
		i++;
	}
	return (0);
}
