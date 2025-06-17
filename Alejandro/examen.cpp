//hacer menu de 3 que pregunte
//Ver si un número es par o impar
//Mostrar todos los múltiplos de un número del 1 al 100
//Salir del programa
//El menú debe repetirse usando while hasta que el usuario elija salir.
#include <iostream>
using namespace std;

int main()
{
    int r,r1,r2,r3,salida=0;
    while (salida != 3){

cout<<"---bienvenido al menu---"<<endl;
cout<<"que desea hacer ?"<<endl;
cout<<"1-ver si mi numero es par o impar"<<endl;
cout<<"2-Mostrar todos los múltiplos de un número del 1 al 100"<<endl;
cout<<"3-Salir del programa..."<<endl;

cin>>r;

switch (r)
{
case 1:
    cout<<"usted a elegido saber si el numero es par o impar"<<endl;
    cout<<"digite el numero"<<endl;
    cin>>r1;

if (r1 % 2 == 0)
{
    cout<<"tu numero "<<r1<<" es par"<<endl;
}
else
{
    cout<<"tu numero "<<r1<<"es impar"<<endl;
}

    break;

 case 2:
    cout<<"usted a elegido mostrar los multiplos"<<endl;
    cout<<"digite el numero"<<endl;
    cin>>r2;

    for (int i=1;i<=100;i++)
    {
        if(i % r2 == 0)
        cout<<i<<" es multiplo de "<<r2<<endl;
    }
    
    break;

case 3:
    cout<<"hasta la vista bby"<<endl;
    return 0;
    break;
}



    }
return 0;
}