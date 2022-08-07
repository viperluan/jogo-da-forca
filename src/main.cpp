#include <iostream>

#include "./entities/Player/Player.h"

int main()
{
  Player *player = new Player(5);

  std::cout << "Seu nome é: " << player->getName();

  return 0;
}
