#include<iostream>
#include "Menu.hh"
#include "Stack.hh"

int main()
{
  Menu* menu1{new Menu("Bacon Burger", "Burger with bacon and fries", 110)};
  Menu* menu2{new Menu("Mix Burger", "Burger with bacon and guacamole with fries", 140)};
  Menu* menu3{new Menu("Big Burger", "Burger with bacon, mushroom, onion and fries", 130)};
  Menu* menu4{new Menu("Double Western Bacon", "Burger with fried onions, BBQ and bacon with fries", 125)};

  Stack* stack{new Stack()};
  stack->Push(menu1);
  stack->Push(menu2);
  stack->Push(menu3);
  stack->Push(menu4);
  stack->Print();

  stack->Pop();
  //stack->Pop();
  //stack->Pop();
  //stack->Pop();

  std::cout << "Menu top name: " << stack->GetTop()->GetMenu()->GetName() << std::endl;

  std::cin.get();

  delete stack;
  return EXIT_SUCCESS;//es igual que poner return 0, esto es de c++
}