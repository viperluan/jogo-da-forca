#ifndef PALAVRA_H
#define PALAVRA_H

class Palavra
{
private:
  const char *nome;
  const char *dica;
  int tamanhoNome;
  int tamanhoDica;

public:
  Palavra(const char[], int, const char[], int);
  ~Palavra();
  const char *getNome();
  const char *getDica();
  int getTamanhoNome();
  int getTamanhoDica();
};

#endif
