#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <sstream>

// Funci�n para convertir un n�mero decimal a binario
std::string decToBinary(int dec) {
    if (dec == 0) return "0";
    std::string binary = "";
    while (dec > 0) {
        binary = (dec % 2 == 0 ? "0" : "1") + binary;
        dec /= 2;
    }
    return binary;
}

// Funci�n para convertir un n�mero decimal a octal
std::string decToOctal(int dec) {
    if (dec == 0) return "0";
    std::string octal = "";
    while (dec > 0) {
        octal = std::to_string(dec % 8) + octal;
        dec /= 8;
    }
    return octal;
}

// Funci�n para convertir un n�mero decimal a hexadecimal
std::string decToHex(int dec) {
    if (dec == 0) return "0";
    std::string hex = "";
    char hexDigits[] = "0123456789ABCDEF";
    while (dec > 0) {
        hex = hexDigits[dec % 16] + hex;
        dec /= 16;
    }
    return hex;
}

// Funci�n para convertir una cadena binaria a un entero decimal
int binaryToDec(const std::string& binary) {
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;
}

// Funci�n para convertir una cadena hexadecimal a un entero decimal
int hexToDec(const std::string& hex) {
    int decimal = 0;
    int power = 0;
    for (int i = hex.length() - 1; i >= 0; i--) {
        int val;
        if (hex[i] >= '0' && hex[i] <= '9') {
            val = hex[i] - '0';
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            val = hex[i] - 'A' + 10;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            val = hex[i] - 'a' + 10;
        } else {
            return -1; // Car�cter hexadecimal inv�lido
        }
        decimal += val * pow(16, power);
        power++;
    }
    return decimal;
}

// Funci�n para sumar dos cadenas binarias y devolver el resultado en binario
std::string addBinary(const std::string& bin1, const std::string& bin2) {
    int dec1 = binaryToDec(bin1);
    int dec2 = binaryToDec(bin2);
    int sum = dec1 + dec2;
    return decToBinary(sum);
}

// Funci�n para restar dos cadenas binarias y devolver el resultado en binario
std::string subtractBinary(const std::string& bin1, const std::string& bin2) {
    int dec1 = binaryToDec(bin1);
    int dec2 = binaryToDec(bin2);
    int diff = dec1 - dec2;
    return decToBinary(diff);
}

// Funci�n para multiplicar dos cadenas binarias y devolver el resultado en binario
std::string multiplyBinary(const std::string& bin1, const std::string& bin2) {
    int dec1 = binaryToDec(bin1);
    int dec2 = binaryToDec(bin2);
    int product = dec1 * dec2;
    return decToBinary(product);
}

// Funci�n para dividir dos cadenas binarias y devolver el resultado en binario
std::string divideBinary(const std::string& bin1, const std::string& bin2) {
    int dec1 = binaryToDec(bin1);
    int dec2 = binaryToDec(bin2);
    if (dec2 == 0) {
        return "Error: Divisi�n por cero";
    }
    int quotient = dec1 / dec2;
    return decToBinary(quotient);
}

int main() {
    // Ejemplo para el problema 1: Conversi�n de decimal a otras bases
    int decimalNumber = 42;
    std::cout << "Decimal " << decimalNumber << " en binario es: " << decToBinary(decimalNumber) << std::endl;
    std::cout << "Decimal " << decimalNumber << " en octal es: " << decToOctal(decimalNumber) << std::endl;
    std::cout << "Decimal " << decimalNumber << " en hexadecimal es: " << decToHex(decimalNumber) << std::endl;

    // Ejemplo para el problema 2: Sumar binarios y mostrar en decimal
    std::string bin1 = "1010"; // 10 en decimal
    std::string bin2 = "1101"; // 13 en decimal
    int sumDecimal = binaryToDec(bin1) + binaryToDec(bin2);
    std::cout << "\nLa suma de los binarios " << bin1 << " y " << bin2 << " en decimal es: " << sumDecimal << std::endl;

    // Ejemplo para el problema 3: Conversi�n de hexadecimal a binario y viceversa
    std::string hexNumber = "2A"; // 42 en decimal
    std::string binarioDeHex = decToBinary(hexToDec(hexNumber));
    std::cout << "\nHexadecimal " << hexNumber << " a binario es: " << binarioDeHex << std::endl;

    std::string binarioNumber = "101111"; // 47 en decimal
    std::string hexDeBinario = decToHex(binaryToDec(binarioNumber));
    std::cout << "Binario " << binarioNumber << " a hexadecimal es: " << hexDeBinario << std::endl;

    // Ejemplo para el problema 4: Operaciones aritm�ticas binarias
    std::string bin3 = "11";   // 3 en decimal
    std::string bin4 = "10";   // 2 en decimal

    std::cout << "\nOperaciones Aritm�ticas Binarias:" << std::endl;
    std::cout << bin3 << " + " << bin4 << " = " << addBinary(bin3, bin4) << std::endl;
    std::cout << bin3 << " - " << bin4 << " = " << subtractBinary(bin3, bin4) << std::endl;
    std::cout << bin3 << " * " << bin4 << " = " << multiplyBinary(bin3, bin4) << std::endl;
    std::cout << bin3 << " / " << bin4 << " = " << divideBinary(bin3, bin4) << std::endl;

    return 0;
}
