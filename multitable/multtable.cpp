//
// Created by turing on 24-6-25.
//

#include <iostream>


void multable() {
  for (int i = 1; i <= 9; i++) {
    for (int j = 1; j <= 9; j++) {
      std::cout << i * j << " ";
    }
    std::cout << std::endl;
  }
}