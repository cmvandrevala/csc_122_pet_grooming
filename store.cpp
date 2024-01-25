#include <iostream>
#include <string>
#include <list>
#include "store.hpp"

using namespace std;

Store::Store(string store_name)
{
  this->name = store_name;
}

void Store::add_dog_to_list(Dog dog)
{
  grooming_list.push_back(dog);
}

string Store::get_name()
{
  return name;
}

void Store::wash_dog()
{
  Dog dog = grooming_list.front();
  cout << "Washing the dog named " << dog.get_name() << endl;
  cout << "How are you doing, bud?" << endl;
  dog.speak();
  cout << "Great! You are all done" << endl;
  cout << endl;
  grooming_list.pop_front();
}

void Store::get_grooming_list()
{
  list<Dog>::iterator i;
  cout << "Here is the list of smelly pups who need a bath!" << endl;
  for (i = grooming_list.begin(); i != grooming_list.end(); ++i)
  {
    cout << i->get_name() << endl;
  }
  cout << endl;
}
