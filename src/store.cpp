#include <iostream>
#include <string>
#include <list>

#include "dog.hpp"
#include "store.hpp"

Store::Store(std::string store_name)
{
  this->name = store_name;
}

void Store::add_dog_to_list(Dog dog)
{
  grooming_list.push_back(dog);
}

std::string Store::get_name()
{
  return name;
}

void Store::wash_dog()
{
  Dog dog = grooming_list.front();
  std::cout << "Washing the dog named " << dog.get_name() << std::endl;
  std::cout << "How are you doing, bud?" << std::endl;
  std::cout << dog.speak();
  std::cout << "Great! You are all done" << std::endl;
  std::cout << std::endl;
  grooming_list.pop_front();
}

void Store::get_grooming_list()
{
  std::cout << "Here is the list of smelly pups who need a bath!" << std::endl;
  for (int i = 0; i < grooming_list.size(); i++)
  {
    std::cout << grooming_list[i].get_name() << std::endl;
  }
  std::cout << std::endl;
}
