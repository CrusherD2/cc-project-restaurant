#include<iostream>
#include "Stack.hh"

Stack::Stack()
{
}

Stack::~Stack()
{
}

Node* Stack::GetTop() const
{
  return head;
}

void Stack::Pop()
{
  if(IsEmpty())
  {
    std::cout << "Stack is empty" << std::endl;
  }
  else
  {
    Node* current{head};
    head = head->next;
    delete current;
  }
}

bool Stack::IsEmpty() const
{
  return head == nullptr;
}

void Stack::Push(Menu*& menu)
{
  if(IsEmpty())
  {
    head = new Node(menu);
  }
  else
  {
    Node* back{head};
    head = new Node(menu);
    head->next = back;
  }
}

void Stack::Print()
{
  if(IsEmpty())
  {
    std::cout << "Stack is empty" << std::endl;
  }
  else
  {
    Node* current{head};

    std::cout << "Menu Dishes:"<< std::endl;
    std::cout << std::endl;
    while (current)
    {
      std::cout << "Plate name: " << current->GetMenu()->GetName() << std::endl;
      std::cout << "Description: " << current->GetMenu()->GetPlate() << std::endl;
      std::cout << "Price: " << current->GetMenu()->GetPrice() << std::endl;
      std::cout << std::endl;
      current = current->next;
    }
  }
}