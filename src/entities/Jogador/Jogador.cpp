#include "Jogador.h"

Jogador::Jogador(const char nome[], int tamanhoNome, char letrasDigitadas[], int tamanhoLetrasDigitadas)
{
  this->nome = nome;
  this->letrasDigitadas = letrasDigitadas;
  this->tamanhoNome = tamanhoNome;
  this->tamanhoLetrasDigitadas = tamanhoLetrasDigitadas;
}

Jogador::~Jogador()
{
}

const char *Jogador::getNome()
{
  return this->nome;
}

char *Jogador::getLetrasDigitadas()
{
  return this->letrasDigitadas;
}

int Jogador::getTamanhoNome()
{
  return this->tamanhoNome;
}

int Jogador::getTamanhoLetrasDigitadas()
{
  return this->tamanhoLetrasDigitadas;
}

bool Jogador::setLetraDigitada(const char letra)
{
  for (int i = 0; i < this->getTamanhoLetrasDigitadas() - 1; i++)
  {
    if (this->letrasDigitadas[i] == letra)
    {
      return false;
    }

    if (this->letrasDigitadas[i] == '\0')
    {
      this->letrasDigitadas[i] = letra;
      return true;
    }
  }

  return false;
}
