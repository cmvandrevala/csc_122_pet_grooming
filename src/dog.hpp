#pragma once

#include <string>

class Dog
{
private:
  std::string name{};

public:
  std::string get_name();
  explicit Dog(std::string name);
  void speak();
};
