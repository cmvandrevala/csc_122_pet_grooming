#include <iostream>
#include "store.hpp"

using namespace std;

int main()
{
  Dog jack = Dog("Jack");
  Dog simon = Dog("Simon");
  Dog lucy = Dog("Lucy");

  cout << "(1)" << endl;
  cout << jack.get_name() << endl;
  cout << simon.get_name() << endl;
  cout << lucy.get_name() << endl;
  cout << endl;

  Store csc_122_pet_salon = Store("CSC 122 Pet Salon");

  csc_122_pet_salon.add_dog_to_list(jack);
  csc_122_pet_salon.add_dog_to_list(simon);
  csc_122_pet_salon.add_dog_to_list(lucy);

  cout << "(2)" << endl;
  csc_122_pet_salon.get_grooming_list();

  csc_122_pet_salon.wash_dog();

  cout << "(3)" << endl;
  csc_122_pet_salon.get_grooming_list();

  Dog pixel = Dog("Pixel");
  Dog bear = Dog("Bear");
  Dog gus = Dog("Gus");

  cout << "(4)" << endl;
  csc_122_pet_salon.get_grooming_list();

  csc_122_pet_salon.add_dog_to_list(pixel);
  csc_122_pet_salon.add_dog_to_list(bear);
  csc_122_pet_salon.add_dog_to_list(gus);

  cout << "(5)" << endl;
  csc_122_pet_salon.get_grooming_list();

  csc_122_pet_salon.wash_dog();

  cout << "(6)" << endl;
  csc_122_pet_salon.get_grooming_list();

  csc_122_pet_salon.wash_dog();

  cout << "(7)" << endl;
  csc_122_pet_salon.get_grooming_list();
}
