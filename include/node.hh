#pragma once
#include "Menu.hh"

class Node
{
private:
  Menu* menu{nullptr};
public:
  Node* next{nullptr};
  Node(Menu*& menu);
  ~Node();

  Menu* GetMenu() const;
};
