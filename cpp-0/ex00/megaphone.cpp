/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/05 00:35:49 by elopin            #+#    #+#             */
/*   Updated: 2025/06/05 00:35:54 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	if (ac == 1)
		return (std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *", 0);
	while(av[++j])
	{
		while(av[j][++i])
			std::cout << (char)std::toupper(av[j][i]);
		i = -1;
	}
	return (0);
}
