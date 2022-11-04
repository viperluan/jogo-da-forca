#ifndef JOGADOR_H
#define JOGADOR_H

class Jogador
{
private:
  const char *nome;
  char *letrasDigitadas;
  int tamanhoNome;
  int tamanhoLetrasDigitadas;

public:
  Jogador(const char[], int, char[], int);
  ~Jogador();
  const char *getNome();
  char *getLetrasDigitadas();
  int getTamanhoNome();
  int getTamanhoLetrasDigitadas();
  bool setLetraDigitada(const char);
};

#endif
