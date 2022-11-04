#include "./Palavra.h"

Palavra::Palavra(const char nome[], int tamanhoNome, const char dica[], int tamanhoDica)
{
  this->nome = nome;
  this->dica = dica;
  this->tamanhoNome = tamanhoNome;
  this->tamanhoDica = tamanhoDica;
}

Palavra::~Palavra()
{
}

const char *Palavra::getNome()
{
  return this->nome;
}

const char *Palavra::getDica()
{
  return this->dica;
}

int Palavra::getTamanhoNome()
{
  return this->tamanhoNome;
}
