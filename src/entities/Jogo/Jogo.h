#ifndef JOGO_H
#define JOGO_H

#include "../Jogador/Jogador.h"
#include "../Palavra/Palavra.h"

class Jogo
{
private:
  Jogador *jogador;
  Palavra *palavra;
  int rodada;
  int chances;
  bool rodando;

public:
  Jogo(Jogador *, Palavra *, int);
  ~Jogo();
  Jogador *getJogador();
  Palavra *getPalavra();
  int getRodada();
  int getChances();
  void setChances();
  void setNovaRodada();
  bool getRodando();
};

#endif
