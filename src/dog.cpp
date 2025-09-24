#include <iostream>

#include "dog.hpp"

Dog::Dog(std::string name)
{
  this->name = name;
}

std::string Dog::get_name()
{
  return name;
};

std::string Dog::speak()
{
  return this->name + " says woof woof! That means thank you!\n";
};
