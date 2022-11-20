#ifndef INTERFACE_USUARIO_H
#define INTERFACE_USUARIO_H

#include "../Palavra/Palavra.h"
#include "../Jogador/Jogador.h"

#include <iostream>
using std::cout;

class InterfaceUsuario
{
private:
  static void mascaraPalavra(Palavra *palavra, Jogador *jogador);

public:
  static void mostraPalavra(Palavra *palavra, Jogador *jogador);
};

#endif
