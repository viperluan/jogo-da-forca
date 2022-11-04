#include <iostream>
#include "./entities/Jogador/Jogador.h"
#include "./entities/Palavra/Palavra.h"
#include "./entities/Jogo/Jogo.h"

using std::cin;
using std::cout;

int main()
{
  char palavraArray[40] = "Batata";
  char dica[400] = "É um legume.";
  char nome[40] = "Luan";
  char letrasDigitadas[11] = {'\0'};
  int chances = 5;

  Jogador *jogador = new Jogador(nome, sizeof(nome), letrasDigitadas, sizeof(letrasDigitadas));
  Palavra *palavra = new Palavra(palavraArray, sizeof(palavraArray), dica, sizeof(dica));
  Jogo *jogo = new Jogo(jogador, palavra, chances);

  while (jogo->getChances() > 0)
  {
    cout << jogo->getJogador()->getNome() << '\n';
    jogo->setChances();
  }

  return 0;
}
