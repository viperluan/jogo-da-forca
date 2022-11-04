#include "./Jogo.h"

Jogo::Jogo(Jogador *jogador, Palavra *palavra, int numeroDeChances)
{
  this->jogador = jogador;
  this->palavra = palavra;
  this->chances = numeroDeChances;
}

Jogo::~Jogo()
{
  delete this->jogador;
  delete this->palavra;
}

Jogador *Jogo::getJogador()
{
  return this->jogador;
}

Palavra *Jogo::getPalavra()
{
  return this->palavra;
}

int Jogo::getChances()
{
  return this->chances;
}

int Jogo::getRodada()
{
  return this->rodada;
}

void Jogo::setChances()
{
  if (this->chances > 0)
    this->chances--;
}

void Jogo::setNovaRodada()
{
  this->rodada++;
}
