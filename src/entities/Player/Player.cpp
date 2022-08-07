#include "Player.h"

#include <iostream>

Player::Player(int chances)
{
  char name[30] = {};

  std::cout << "Digite seu nome: ";
  std::cin >> name;

  int nameSize = 0;

  for (int i = 0; name[i]; i++)
    nameSize++;

  this->name = new char[nameSize];
  this->typedCharacters = new char[chances];
  this->chances = chances;

  for (int i = 0; i < nameSize; i++)
    this->name[i] = name[i];

  for (int i = 0; i < this->chances; i++)
    this->typedCharacters[i] = '\0';
}

Player::~Player()
{
  delete[] this->name;
  delete[] this->typedCharacters;
}

char *Player::getName()
{
  return this->name;
}

char *Player::getTypedCharacters()
{
  return this->typedCharacters;
}

bool Player::setTypedCharacters(char character)
{
  for (int i = 0; i < this->chances; i++)
    if (this->typedCharacters[i] == '\0')
    {
      this->typedCharacters[i] = character;
      break;
    }
}
