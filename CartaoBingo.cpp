#include "CartaoBingo.h"
#include <cstdlib>
#include <ctime>

CartaoBingo::CartaoBingo() {
    cartao.resize(LINHAS, vector<int>(COLUNAS, 0));
    gerarCartao();
}

void CartaoBingo::gerarCartao() {
    for (int i = 0; i < LINHAS; ++i) {
        for (int j = 0; j < COLUNAS; ++j) {
            cartao[i][j] = rand() % 100 + 1;
        }
    }
}

void CartaoBingo::guardarCartao(ofstream& arquivo) const {
    for (const auto& linha : cartao) {
        for (int num : linha) {
            arquivo << num << " ";
        }
        arquivo << endl;
    }
    arquivo << endl;
}

void CartaoBingo::mostrarCartao() const {
    for (const auto& linha : cartao) {
        for (int num : linha) {
            cout << (num == 0 ? "x" : to_string(num)) << " ";
        }
        cout << endl;
    }
}