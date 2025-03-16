#ifndef SORTEIOBINGO_H
#define SORTEIOBINGO_H

#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class SorteioBingo {
private:
    vector<int> numerosSorteados;
    int quantidadeNumeros;
    string modoSorteio;

public:
    SorteioBingo(int quantidade, const string& modo);
    void sortearNumero();
    void mostrarNumerosSorteados() const;
};

#endif