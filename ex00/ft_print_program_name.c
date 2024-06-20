/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 10:18:01 by seantoni          #+#    #+#             */
/*   Updated: 2023/11/03 10:32:48 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *nombre)
{
	int	i;

	i = 0;
	while (nombre[i] != 0)
	{
		write(1, &nombre[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	char	*nombre;

	if (argc < 1)
		return (0);
	nombre = argv[0];
	ft_putchar(nombre);
	return (0);
}
