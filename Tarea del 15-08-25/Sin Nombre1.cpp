#include <iostream>

//  Implementar una tabla de multiplicar usando while.
void tablaMultiplicar() {
    int numero;
    std::cout << "Introduce un numero para ver su tabla de multiplicar: ";
    std::cin >> numero;
    
    int i = 1;
    std::cout << "Tabla de multiplicar del " << numero << ":" << std::endl;
    while (i <= 10) {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
        i++;
    }
}

//  Escribir un programa que calcule la suma de los numeros pares entre 1 y 50.
void sumaPares() {
    int suma = 0;
    for (int i = 1; i <= 50; i++) {
        if (i % 2 == 0) {
            suma += i;
        }
    }
    std::cout << "La suma de los numeros pares entre 1 y 50 es: " << suma << std::endl;
}

//  Escribir un programa que calcule la suma de los numeros primos entre 1 y 100.
void sumaPrimos() {
    int suma = 0;
    for (int numero = 2; numero <= 100; numero++) {
        bool esPrimo = true;
        for (int i = 2; i * i <= numero; i++) {
            if (numero % i == 0) {
                esPrimo = false;
                break;
            }
        }
        if (esPrimo) {
            suma += numero;
        }
    }
    std::cout << "La suma de los numeros primos entre 1 y 100 es: " << suma << std::endl;
}

int main() {
    std::cout << "--- Problema 1: Tabla de multiplicar ---" << std::endl;
    tablaMultiplicar();
    
    std::cout << "\n--- Problema 2: Suma de numeros pares ---" << std::endl;
    sumaPares();
    
    std::cout << "\n--- Problema 3: Suma de numeros primos ---" << std::endl;
    sumaPrimos();

    return 0;
}
