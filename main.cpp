#include <iostream>
// #include "mypet/pet.h"


auto add(int x, int y) -> int {
  return x + y;
}

int main() {
  int res = add(1, 2);
  std::cout << res << std::endl;
}