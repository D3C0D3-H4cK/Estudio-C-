#include <iostream>

int main(){
    int seleccion;
    int numero1;
    std::cout << "Digite un numero: ";
    std::cin >> numero1;
    int numero2;
    std::cout << "Digite su segundo numero numero: ";
    std::cin >> numero2;
    std::cout << "Seleccione la operacion: "<< std::endl;
    std::cout << "1. Suma"<< std::endl;
    std::cout << "2. Resta"<< std::endl;
    std::cout << "3. Multiplicacion"<< std::endl;
    std::cout << "4. Division"<< std::endl;
    std::cin >> seleccion;
    
    if (seleccion == 1){
        std::cout << "El resultado de la suma es:" << numero1 + numero2;
    }
    else if (seleccion == 2){
        std::cout << "El resultado de la resta es: " << numero1 - numero2;
    }
    else if (seleccion == 3){
        std::cout << "El resultado de la multiplicacion es: " << numero1 * numero2;
    }
    else if (seleccion == 4){
        std::cout << "El resultado de la division es: " << numero1 / numero2;
    }
    else {
        std::cout << "Selecciona algo seleccionable marranete hpta";
    }
    return 0;
}