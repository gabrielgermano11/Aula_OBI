#include <iostream>
#include <string> // Necessário para usar std::string
using namespace std;

int main() {
    string a;

    cout << "Vc sabe como se diz cafe com pão em inglês??? ";
    cin >> a; // Lê apenas até o primeiro espaço

    if (a == "sim") { // Comparação correta
        cout << "Eita bixo sabido";
    }
    else if (a == "qual?") { // Comparação correta
        cout << "cofi uit bre";
    }
    else {
        cout << "Resposta não reconhecida";
    }

    return 0;
}