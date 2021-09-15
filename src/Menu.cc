#include "Menu.hh"

Menu::Menu(std::string name, std::string plate, unsigned int price)
{
  this->name = name;
  this->plate = plate;
  this->price = price;
}

Menu::~Menu()
{
}

std::string Menu::GetName() const
{
  return name;
}

std::string Menu::GetPlate() const
{
  return plate;
}

unsigned int Menu::GetPrice() const
{
  return price;
}