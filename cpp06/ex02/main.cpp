/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 20:48:34 by elopin            #+#    #+#             */
/*   Updated: 2025/09/21 20:48:35 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "identify.hpp"

int main() {
    srand(time(0));

    Base* obj = generate();
    identify(obj);
    identify(*obj);

    delete obj;
    return 0;
}
