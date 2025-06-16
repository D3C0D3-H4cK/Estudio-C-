#include <iostream>
using namespace std;

int main(){
    int numero;
    int i = 1;
    std::cout<<"Ingrese su numero a multiplicar: ";
    std::cin>>numero;
    while(i<=10){
        cout<<numero * i<<endl;
        i++;
    }
}
