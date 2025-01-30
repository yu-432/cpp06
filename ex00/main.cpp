/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:16:31 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/30 20:50:47 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(void) {
  ScalarConverter::convert("0");
  ScalarConverter::convert("nan");
  ScalarConverter::convert("42.0f");
  ScalarConverter::convert("42hello");
  ScalarConverter::convert("inf");
  ScalarConverter::convert("+inff");
  ScalarConverter::convert("-inff");
  ScalarConverter::convert("-0.1");
  ScalarConverter::convert("-0.0000001");
}

