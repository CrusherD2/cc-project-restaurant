#pragma once

#include<string>

class Menu
{
private:
  std::string name;
  std::string plate;
  unsigned int price;
public:
  Menu(std::string name, std::string plate, unsigned int price);
  ~Menu();
  std::string GetName() const;
  std::string GetPlate() const;
  unsigned int GetPrice() const;
};
