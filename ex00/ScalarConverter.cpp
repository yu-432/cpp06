/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:10:24 by yooshima          #+#    #+#             */
/*   Updated: 2025/02/02 19:46:53 by yooshima         ###   ########.fr       */
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
  convertChar(str);
  convertInt(str);
  convertFloat(str);
  convertDouble(str);
}

void ScalarConverter::convertChar(const std::string& str) {
  if (!isValidInput(str) || isPseudoLiteral(str)) {
    std::cout << "char: impossible" << std::endl;
    return;
  }

  double d = strtod(str.c_str(), NULL);
  if (CHAR_MAX < d || CHAR_MIN > d || d == HUGE_VAL) {
    std::cout << "char: overflowed" << std::endl;
    return;
  }
  if (!isprint(static_cast<int>(d))) {
    std::cout << "char: Non displayable" << std::endl;
    return;
  }
  std::cout << "char: " << (unsigned char)d << std::endl;
}

void ScalarConverter::convertInt(const std::string& str) {
  if (!isValidInput(str) || isPseudoLiteral(str)) {
    std::cout << "int: impossible" << std::endl;
    return;
  }

  double d = strtod(str.c_str(), NULL);
  if (INT_MAX < d || INT_MIN > d || d == HUGE_VAL) {
    std::cout << "int: overflowed" << std::endl;
    return;
  }
  std::cout << "int: " << static_cast<int>(d) << std::endl;
}

void ScalarConverter::convertFloat(const std::string& str) {
  if (!isValidInput(str)) {
    std::cout << "float: impossible" << std::endl;
    return;
  }

  double d = strtod(str.c_str(), NULL);
  if (!isPseudoLiteral(str) && (FLT_MAX < d || -FLT_MAX > d || d == HUGE_VAL)) {
    std::cout << "float: overflowed" << std::endl;
    return;
  }
  std::cout << "float: " << std::fixed
            << std::setprecision(countAfterDecimalPoint(str))
            << static_cast<float>(d) << "f" << std::endl;
}

void ScalarConverter::convertDouble(const std::string& str) {
  if (!isValidInput(str)) {
    std::cout << "double: impossible" << std::endl;
    return;
  }

  double d = strtod(str.c_str(), NULL);
  if (!isPseudoLiteral(str) && d == HUGE_VAL) {
    std::cout << "double: overflowed" << std::endl;
    return;
  }
  std::cout << "double: " << std::fixed
            << std::setprecision(countAfterDecimalPoint(str)) << d << std::endl;
}

bool ScalarConverter::isPseudoLiteral(const std::string& str) {
  return (str == "nan" || str == "nanf" || str == "-inf" || str == "+inf" ||
          str == "-inff" || str == "+inff");
}

bool ScalarConverter::isValidInput(const std::string& str) {
  if (isPseudoLiteral(str)) return true;
  if (str.find_first_not_of("0123456789+-.f") == std::string::npos) {
    if (str.find('+') != str.rfind('+') || str.find('-') != str.rfind('-') ||
        str.find('.') != str.rfind('.') || str.find('f') != str.rfind('f'))
      return false;
    if (str.find('f') != std::string::npos && str.find('f') != str.length() - 1)
      return false;
    return true;
  }
  return false;
}

size_t ScalarConverter::countAfterDecimalPoint(const std::string& str) {
  size_t len;
  if (str.find('.') == std::string::npos) return 1;
  len = str.length() - str.find('.') - 1;
  if (str.find('f') != std::string::npos) len -= 1;
  return len;
}
