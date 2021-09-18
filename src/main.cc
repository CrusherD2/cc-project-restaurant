#include<iostream>
#include "Menu.hh"
#include "Stack.hh"

int main()
{
  Menu* menu1{new Menu("Stainless steel", "knifes", 5)};
  Menu* menu2{new Menu("Porcelain", "Spoon", 20)};
  Menu* menu3{new Menu("Aluminium", "Fork", 15)};
  Menu* menu4{new Menu("Glass", "Wine Glasses", 10)};

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