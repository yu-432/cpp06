/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:10:24 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/30 16:36:56 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}

ScalarConverter::ScalarConverter(const ScalarConverter& src) { (void)src; }

ScalarConverter::~ScalarConverter() {};

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& src) {
  (void)src;
  return *this;
}

void ScalarConverter::convert(const std::string& str) {
  try {
    std::cout << "convert: " << str << std::endl;
    std::cout << std::stoi(str) << std::endl;
  } catch (std::invalid_argument& e) {
    std::cout << e.what() << std::endl;
  } catch (std::out_of_range& e) {
    std::cout << e.what() << std::endl;
  }
}
