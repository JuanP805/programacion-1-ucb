#include <iostream>
#include <bitset>
#include <string> // Necesario para std::stoi

using namespace std;

int main() {
    string bin1, bin2;

    cout << "Ingrese el primer n�mero binario: ";
    cin >> bin1;

    cout << "Ingrese el segundo n�mero binario: ";
    cin >> bin2;

    // Convertir binarios a enteros
    int num1 = stoi(bin1, 0, 2);
    int num2 = stoi(bin2, 0, 2);

    int suma = num1 + num2;

    // Mostrar resultados
    cout << "Primer n�mero en decimal: " << num1 << endl;
    cout << "Segundo n�mero en decimal: " << num2 << endl;
    cout << "Suma en decimal: " << suma << endl;
    cout << "Suma en binario: " << bitset<32>(suma) << endl;

    return 0;
}
