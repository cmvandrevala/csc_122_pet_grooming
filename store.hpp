#pragma once

#include <string>
#include <deque>
#include "dog.hpp"

using namespace std;

class Store
{
private:
  deque<Dog> grooming_list;
  string name;

public:
  explicit Store(string store_name);
  string get_name();
  void add_dog_to_list(Dog dog);
  void get_grooming_list();
  void wash_dog();
};
