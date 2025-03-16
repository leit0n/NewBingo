#include "CartaoBingo.h"
#include "SorteioBingo.h"
#include <iostream>
#include <fstream>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned>(time(0)));

    cout << "Escolha o modo de sorteio (automático/manual): ";
    string modoSorteio;
    cin >> modoSorteio;

    cout << "Escolha a quantidade de números (75, 90 ou 100): ";
    int quantidadeNumeros;
    cin >> quantidadeNumeros;

    cout << "Digite a quantidade de cartões a serem gerados: ";
    int quantidadeCartoes;
    cin >> quantidadeCartoes;

    ofstream arquivo("cartoes_bingo.txt");

    for (int i = 0; i < quantidadeCartoes; ++i) {
        CartaoBingo cartao;
        cartao.guardarCartao(arquivo);
    }

    arquivo.close();

    SorteioBingo sorteio(quantidadeNumeros, modoSorteio);
    sorteio.sortearNumero();
    sorteio.mostrarNumerosSorteados();

    return 0;
}

