/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elopin <elopin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/27 17:37:31 by elopin            #+#    #+#             */
/*   Updated: 2025/09/27 17:37:32 by elopin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

template <typename T>
void swap(T &a, T &b)
{
  T temp = a;
  a = b;
  b = temp;
}

template <typename T>
T min(const T &a, const T &b)
{
  if (a < b)
    return (a);
  else
    return (b);
}

template <typename T>
T max(const T &a, const T &b)
{
  if (a > b)
    return (a);
  else
    return (b);
}

#endif
