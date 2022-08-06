#include "./Word.h"

#include <iostream>

Word::Word()
{
  char name[30] = {};
  char hint[200] = {};

  std::cout << "Digite uma palavra: ";
  std::cin >> name;

  std::cout << "Digite uma dica: ";
  std::cin.ignore();
  std::cin.getline(hint, sizeof(hint));

  int nameSize = 0, hintSize = 0;

  for (int i = 0; name[i]; i++)
    nameSize++;

  for (int i = 0; hint[i]; i++)
    hintSize++;

  this->name = new char[nameSize];
  this->hint = new char[hintSize];

  for (int i = 0; i < nameSize; i++)
    this->name[i] = name[i];

  for (int i = 0; i < hintSize; i++)
    this->hint[i] = hint[i];
}

Word::~Word()
{
  delete[] this->name;
  delete[] this->hint;
}

char *Word::getName()
{
  return this->name;
}

char *Word::getHint()
{
  return this->hint;
}

int Word::getSize()
{
  return this->size;
}

// int *Word::charExistsOnPositions()
// {
// }
