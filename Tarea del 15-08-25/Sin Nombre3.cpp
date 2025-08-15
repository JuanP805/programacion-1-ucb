#include <iostream>
using namespace std;

// Tabla de multiplicar usando while
void tablaMultiplicar(int numero) {
    cout << "\n--- Tabla de multiplicar del " << numero << " ---\n";
    int i = 1;
    while (i <= 10) {
        cout << numero << " x " << i << " = " << numero * i << endl;
        i++;
    }
}

//  Suma de números pares entre 1 y 50
int sumaPares(int inicio, int fin) {
    int suma = 0;
    for (int i = inicio; i <= fin; i++) {
        if (i % 2 == 0) {
            suma += i;
        }
    }
    return suma;
}

//  Suma de números primos entre 1 y 100
bool esPrimo(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return false;
    }
    return true;
}

int sumaPrimos(int inicio, int fin) {
    int suma = 0;
    for (int i = inicio; i <= fin; i++) {
        if (esPrimo(i)) {
            suma += i;
        }
    }
    return suma;
}

int main() {
    int numero;

    // Ejercicio 
    cout << "Ingrese un número para mostrar su tabla de multiplicar: ";
    cin >> numero;
    tablaMultiplicar(numero);

    // Ejercicio 
    int suma_pares = sumaPares(1, 50);
    cout << "\nLa suma de los números pares entre 1 y 50 es: " << suma_pares << endl;

    // Ejercicio 
    int suma_primos = sumaPrimos(1, 100);
    cout << "La suma de los números primos entre 1 y 100 es: " << suma_primos << endl;

    return 0;
}
