/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:10:24 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/30 18:28:24 by yooshima         ###   ########.fr       */
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
  std::stringstream ss;
  float fValue;
  ss.str(str);
  ss >> fValue;
  std::cout << "input str: " << str << std::endl;
  std::cout << fValue << std::endl;
}
