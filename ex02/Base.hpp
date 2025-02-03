/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 20:42:08 by yooshima          #+#    #+#             */
/*   Updated: 2025/02/03 12:23:14 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BASE_HPP
#define BASE_HPP

#include <ctime>
#include <cstdlib>
#include <iostream>

class Base {
  public:
    virtual ~Base();
};

Base* generate(void);
void identify(Base* p);
void identify(Base& p);

#endif