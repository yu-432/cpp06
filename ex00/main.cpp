/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:16:31 by yooshima          #+#    #+#             */
/*   Updated: 2025/02/03 13:52:23 by yooshima         ###   ########.fr       */
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
  // ScalarConverter::convert("42a.0f");
  // ScalarConverter::convert("aaaa");
  // ScalarConverter::convert("42.0ff");
  // ScalarConverter::convert("+-42.123f");
  // ScalarConverter::convert("42hello");
  // ScalarConverter::convert("2147483648");
  // ScalarConverter::convert("-2147483649");
  // ScalarConverter::convert("-0.1");
  // ScalarConverter::convert("-0.0000001");
  // ScalarConverter::convert(
  //     "999999919231231239149147984792874987489728347298748237489273847283974829"
  //     "374823748927348923748927348927348237849728947238473424234234251235782498"
  //     "729837487298479823749872398472893749287342349999999192312311800072813505"
  //     "762092738052972982299836224164917390988027147631621747178364634238841919"
  //     "471310721527881240225869401230435705082085325589780340802647988466860045"
  //     "7186479188213760.0");
}
