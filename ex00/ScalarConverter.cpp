/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:10:24 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/30 20:51:01 by yooshima         ###   ########.fr       */
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

void ScalarConverter::convert(const std::string& str) { convertChar(str); }

void ScalarConverter::convertChar(const std::string& str) {
  if (str == "nan") {
    std::cout << "impossible" << std::endl;
    return;//範囲外の場合　
  }

  std::stringstream ss;
  int iValue;

  ss.str(str);
  ss >> iValue;
  if (!isChar(iValue)) {
    std::cout << "Non displayable" << std::endl;
    return;//0~255の範囲だが、プリントできないもの
  }
  std::cout << "char input str: " << str << std::endl;
  std::cout << (unsigned char)iValue << std::endl;
}

bool ScalarConverter::isChar(const int num) {
  if (isprint(num)) return true;
  return false;
}
