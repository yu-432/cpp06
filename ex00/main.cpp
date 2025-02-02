/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:16:31 by yooshima          #+#    #+#             */
/*   Updated: 2025/02/02 19:47:17 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "Invalid arguments" << std::endl;
    return 1;
  }
  ScalarConverter::convert(argv[1]);
  // ScalarConverter::convert("0");
  // ScalarConverter::convert("nan");
  // ScalarConverter::convert("nanf");
  // ScalarConverter::convert("+inf");
  // ScalarConverter::convert("-inf");
  // ScalarConverter::convert("+inff");
  // ScalarConverter::convert("-inff");
  // ScalarConverter::convert("inf");
  // ScalarConverter::convert("42.0f");
  // ScalarConverter::convert("42.123f");
  // ScalarConverter::convert("42hello");
  // ScalarConverter::convert("2147483648");
  // ScalarConverter::convert("-2147483649");
  // ScalarConverter::convert("-0.1");
  // ScalarConverter::convert("-0.0000001");
  // ScalarConverter::convert("9999999192312312391491479847928749874897283472987482374892738472839748293748237489273489237489273489273482378497289472384734242342342512357824987298374872984798237498723984728937492873423499999991923123118000728135057620927380529729822998362241649173909880271476316217471783646342388419194713107215278812402258694012304357050820853255897803408026479884668600457186479188213760.0");
}

