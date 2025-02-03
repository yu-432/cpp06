/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:16:07 by yooshima          #+#    #+#             */
/*   Updated: 2025/02/03 12:43:40 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <cerrno>
#include <cfloat>
#include <climits>
#include <cstdlib>
#include <iomanip>
#include <iostream>

class ScalarConverter {
 public:
  static void convert(const std::string& str);

 private:
  ScalarConverter();
  ScalarConverter(const ScalarConverter& src);
  ~ScalarConverter();

  ScalarConverter& operator=(const ScalarConverter& src);

  static void convertChar(const std::string& str);
  static void convertInt(const std::string& str);
  static void convertFloat(const std::string& str);
  static void convertDouble(const std::string& str);
  static bool isValidInput(const std::string& str);
  static bool isPseudoLiteral(const std::string& str);
  static size_t countAfterDecimalPoint(const std::string& str);
};

#endif
