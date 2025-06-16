#include <iostream>

int main() { 
    int altura;
    int base;
    std::cout << "Ingrese porfavor la base del triangulo ";
    std::cin >> base;
    std::cout << "Porfavor ahora ingrese la altura del triangulo ";
    std::cin >> altura;
    std::cout << "El area de su triangulo fue " << altura * base / 2; 
    return 0;
}