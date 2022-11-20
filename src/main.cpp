#include <iostream>
#include "./entities/Jogador/Jogador.h"
#include "./entities/Palavra/Palavra.h"
#include "./entities/Jogo/Jogo.h"
#include "./entities/InterfaceUsuario/InterfaceUsuario.h"

using std::cin;
using std::cout;

int main()
{
  char palavraAtual[] = "banana";
  char letraAtual;
  char dica[] = "É uma fruta.";
  char nomeJogador[] = "Luan";
  char letrasDigitadas[11] = {};
  int numeroDeChances = 5;

  Jogador *jogador = new Jogador(nomeJogador, sizeof(nomeJogador), letrasDigitadas, sizeof(letrasDigitadas));
  Palavra *palavra = new Palavra(palavraAtual, sizeof(palavraAtual), dica, sizeof(dica));
  Jogo *jogo = new Jogo(jogador, palavra, numeroDeChances);

  while (jogo->getChances() > 0)
  {
    system("clear");
    cout << dica << "\n\n";
    InterfaceUsuario::mostraPalavra(palavra, jogador);
    cout << "\n\n";

    cout << "Chances: " << jogo->getChances() << '\n';
    cout << "Digite uma letra: ";
    cin >> letraAtual;
    jogador->setLetraDigitada(letraAtual);

    jogo->setChances();
  }

  return 0;
}
