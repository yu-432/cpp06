/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooshima <yooshima@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/02 22:28:02 by yooshima          #+#    #+#             */
/*   Updated: 2025/02/03 12:27:01 by yooshima         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base* generate(void) {
  std::srand(std::time(NULL));
  switch (std::rand() % 3)
  {
  case 0:
    return new A();
  case 1:
    return new B();
  case 2:
    return new C();
  }
  std::cout << "rand error" << std::endl;
  return NULL;
}

void identify(Base* p) {
  std::cout << "pointer: ";
  if (dynamic_cast<A*>(p)) {
    std::cout << "A" << std::endl;
  } else if (dynamic_cast<B*>(p)){
    std::cout << "B" << std::endl;
  } else if (dynamic_cast<C*>(p)){
    std::cout << "C" << std::endl;
  } else {
    std::cout << "Not found" << std::endl;
  }
}

void identify(Base& p) {
  std::cout << "reference: ";
  try {
    A& a = dynamic_cast<A&>(p);
    std::cout << "A" << std::endl;
    (void)a;
    return;
  } catch (std::bad_cast& b) {}
  
    try {
    B& b = dynamic_cast<B&>(p);
    std::cout << "B" << std::endl;
    (void)b;
    return;
  } catch (std::bad_cast& b) {}
  
    try {
    C& c = dynamic_cast<C&>(p);
    std::cout << "C" << std::endl;
    (void)c;
    return;
  } catch (std::bad_cast& b) {}
}
