/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 15:16:31 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/30 16:33:07 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(void) {
  ScalarConverter::convert("hello");
  ScalarConverter::convert("1");
  ScalarConverter::convert("10hello");
  ScalarConverter::convert("1234.56789");
  ScalarConverter::convert("1234567891234563456123452345334567432456754324567865435676544434561234.3");
  ScalarConverter::convert("1234567891234563456123452345334567432456754324567865435676544434561234");
  ScalarConverter::convert("-0.1");
  ScalarConverter::convert("-0.0000001");
}

