//
// Created by turing on 24-6-25.
//

#ifndef PET_H
#define PET_H
#include <string>
#include <iostream>

class pet {
  public:
    std::string name;
    std::string type;
    int Sound() const; // 构造函数

    pet(std::string name, std::string type) {
      this->name = name;
      this->type = type;
    }

    pet() {
      this->name = "pet";
      this->type = "pet";
    }
};

inline auto pet::Sound() const -> int {
  if (type == "dog") {
    std::cout << "wang wang" << std::endl;
  } else if (type == "cat") {
    std::cout << "miao miao" << std::endl;
  } else {
    std::cout << "unknown" << std::endl;
  }
  return 0;
}

#endif //PET_H
