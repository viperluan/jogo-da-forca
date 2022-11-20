#include "./InterfaceUsuario.h"

void InterfaceUsuario::mascaraPalavra(Palavra *palavra, Jogador *jogador)
{
  // Menos um desconsidera o \0 do final da string
  int tamanhoPalavra = palavra->getTamanhoNome() - 1;
  int tamanhoLetrasDigitadas = jogador->getTamanhoLetrasDigitadas() - 1;
  char mascara[tamanhoPalavra] = {};

  // Laço para percorrer a palavra
  for (int i = 0; i < tamanhoPalavra; i++)
  {
    char letraAtual = palavra->getNome()[i];

    // Laço para percorrer as letras digitas
    for (int j = 0; j < tamanhoLetrasDigitadas; j++)
    {
      char letraDigitadaAtual = jogador->getLetrasDigitadas()[j];

      if (letraAtual == letraDigitadaAtual)
      {
        mascara[i] = letraDigitadaAtual;
        break;
      }
      else
        mascara[i] = '_';
    }
  }

  cout << mascara;
}

void InterfaceUsuario::mostraPalavra(Palavra *palavra, Jogador *jogador)
{
  InterfaceUsuario::mascaraPalavra(palavra, jogador);
}
