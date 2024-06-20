/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seantoni <seantoni@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/03 20:39:20 by seantoni          #+#    #+#             */
/*   Updated: 2023/11/06 20:57:06 by seantoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_swap(char **arg_a, char **arg_b)
{
	char	*temp;

	temp = *arg_a;
	*arg_a = *arg_b;
	*arg_b = temp;
}

int	ft_comparar(char *arg_a, char *arg_b)
{
	int	i;

	i = 0;
	while (arg_a[i] != 0 && arg_b[i] != 0 && arg_a[i] == arg_b[i])
		i++;
	return (arg_a[i] - arg_b[i]);
}

void	ft_sort(char *args[], int num_args)
{
	int	i;
	int	j;
	int	swapped;

	i = 0;
	while (i < num_args - 1)
	{
		j = 0;
		swapped = 0;
		while (j < num_args - i - 1)
		{
			if (ft_comparar(args[j], args[j + 1]) > 0)
			{
				ft_swap(&args[j], &args[j + 1]);
				swapped = 0;
			}
			j++;
		}
		i++;
	}
}

int	main(int argc, char *argv[])
{
	char	**args;
	int		num_args;
	int		i;

	if (argc < 2)
		return (1);
	args = &argv[1];
	num_args = argc - 1;
	ft_sort(args, num_args);
	i = 0;
	while (i < num_args)
	{
		ft_putstr(args[i]);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
