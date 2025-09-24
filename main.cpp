#include <iostream>

#include "src/dog.hpp"
#include "src/store.hpp"

int main()
{
  Dog jack = Dog("Jack");
  Dog simon = Dog("Simon");
  Dog lucy = Dog("Lucy");

  std::cout << "(1)" << std::endl;
  std::cout << jack.get_name() << std::endl;
  std::cout << simon.get_name() << std::endl;
  std::cout << lucy.get_name() << std::endl;
  std::cout << std::endl;

  Store csc_122_pet_salon = Store("CSC 122 Pet Salon");

  csc_122_pet_salon.add_dog_to_list(jack);
  csc_122_pet_salon.add_dog_to_list(simon);
  csc_122_pet_salon.add_dog_to_list(lucy);

  std::cout << "(2)" << std::endl;
  csc_122_pet_salon.get_grooming_list();

  csc_122_pet_salon.wash_dog();

  std::cout << "(3)" << std::endl;
  csc_122_pet_salon.get_grooming_list();

  Dog pixel = Dog("Pixel");
  Dog bear = Dog("Bear");
  Dog gus = Dog("Gus");

  std::cout << "(4)" << std::endl;
  csc_122_pet_salon.get_grooming_list();

  csc_122_pet_salon.add_dog_to_list(pixel);
  csc_122_pet_salon.add_dog_to_list(bear);
  csc_122_pet_salon.add_dog_to_list(gus);

  std::cout << "(5)" << std::endl;
  csc_122_pet_salon.get_grooming_list();

  csc_122_pet_salon.wash_dog();

  std::cout << "(6)" << std::endl;
  csc_122_pet_salon.get_grooming_list();

  csc_122_pet_salon.wash_dog();

  std::cout << "(7)" << std::endl;
  csc_122_pet_salon.get_grooming_list();
}
