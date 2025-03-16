#include "SorteioBingo.h"
#include <cstdlib>
#include <ctime>

SorteioBingo::SorteioBingo(int quantidade, const string& modo) : quantidadeNumeros(quantidade), modoSorteio(modo) {
    srand(static_cast<unsigned>(time(0)));
}

void SorteioBingo::sortearNumero() {
    while (numerosSorteados.size() < quantidadeNumeros) {
        if (modoSorteio == "manual") {
            cout << "Enter para sortear o próximo número." << endl;
            cin.ignore();
        }

        int sorteio;
        do {
            sorteio = rand() % 100 + 1;
        } while (find(numerosSorteados.begin(), numerosSorteados.end(), sorteio) != numerosSorteados.end());

        numerosSorteados.push_back(sorteio);
        sort(numerosSorteados.begin(), numerosSorteados.end());

        cout << "Número sorteado: " << sorteio;
        if (numerosSorteados.size() > 1) {
            cout << ", Anterior: " << numerosSorteados[numerosSorteados.size() - 2];
        }
        cout << endl;
    }
}

void SorteioBingo::mostrarNumerosSorteados() const {
    cout << "Painel dos números sorteados: ";
    for (int num : numerosSorteados) {
        cout << num << " ";
    }
    cout << endl;
}
