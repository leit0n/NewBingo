#ifndef CARTAOBINGO_H
#define CARTAOBINGO_H

#include <vector>
#include <iostream>
#include <fstream>

using namespace std;

class CartaoBingo {
private:
    static const int LINHAS = 5;
    static const int COLUNAS = 5;
    vector<vector<int>> cartao;

public:
    CartaoBingo();
    void gerarCartao();
    void guardarCartao(ofstream& arquivo) const;
    void mostrarCartao() const;
};

#endif
