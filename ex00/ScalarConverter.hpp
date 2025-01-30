/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 12:16:07 by yooshima          #+#    #+#             */
/*   Updated: 2025/01/30 16:01:43 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP


#include <string>
#include <iostream>

class ScalarConverter {
  public:
    static void convert(const std::string& str);

  private:
    ScalarConverter();
    ScalarConverter(const ScalarConverter& src);
    ~ScalarConverter();
    ScalarConverter& operator=(const ScalarConverter& src);
};

#endif
