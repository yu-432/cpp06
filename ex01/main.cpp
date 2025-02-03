/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:32:24 by yooshima          #+#    #+#             */
/*   Updated: 2025/02/03 14:10:41 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <iostream>

#include "Serializer.hpp"

int main(void) {
  // Serializer s1();
  Data d1;

  std::cout << "Data1 address: " << &d1 << std::endl;
  uintptr_t d1Uint = Serializer::serialize(&d1);
  std::cout << "Data1 serialized: " << d1Uint << std::endl;
  Data* dPtr = Serializer::deserialize(d1Uint);
  std::cout << "Data1 deserialized: " << dPtr << std::endl;
}