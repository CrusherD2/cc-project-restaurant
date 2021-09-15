#include "Node.hh"

Node::Node(Menu*& menu)
{
  this->menu = menu;
}

Node::~Node()
{
}

Menu* Node::GetMenu() const
{
  return menu;
}