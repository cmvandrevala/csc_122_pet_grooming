#pragma once

#include <string>
#include <deque>

#include "dog.hpp"

class Store
{
private:
  std::deque<Dog> grooming_list;
  std::string name;

public:
  explicit Store(std::string store_name);
  std::string get_name();
  void add_dog_to_list(Dog dog);
  void get_grooming_list();
  void wash_dog();
};
