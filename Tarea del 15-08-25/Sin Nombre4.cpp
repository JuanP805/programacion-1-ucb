#include <iostream>
#include <bitset>
using namespace std;

int main() {
    int decimal;

    cout << "Ingrese un número decimal: ";
    cin >> decimal;

    // Binario usando bitset (hasta 32 bits)
    cout << "Binario: " << bitset<32>(decimal) << endl;

    // Octal usando manipulador de flujo
    cout << "Octal: " << oct << decimal << endl;

    // Hexadecimal usando manipulador de flujo
    cout << "Hexadecimal: " << hex << decimal << endl;

    return 0;
}
