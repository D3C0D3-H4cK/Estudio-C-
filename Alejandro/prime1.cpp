#include <iostream>
using namespace std;

int main()
{

int N1,N2,N3,N4,N5,N6,N7,N8;

cout<<"ingrese dos numeros enteros..."<<endl;
cin>>N1;
cin>>N2;
cout<<"que desea hacer ingrese el numero pactado..."<<endl;
cout<<"__________"<<endl;
cout<<"1-suma"<<endl;
cout<<"__________"<<endl;
cout<<"2-resta"<<endl;
cout<<"__________"<<endl;
cout<<"3-multiplicacion"<<endl;
cout<<"__________"<<endl;
cout<<"4-division"<<endl;

N3=N1+N2;
N4=N1-N2;
N6=N1/N2;
N7=N1*N2;

cin>>N5;

switch (N5)
{
case 1:
    cout<<"su suma es="<<N3<<endl;
    break;

    case 2:
    cout<<"su resta es="<<N4<<endl;
    break;

    case 3:
    cout<<"su multiplicacion es="<<N7<<endl;
    break;

    case 4:
    cout<<"su division es="<<N6<<endl;
    break;

default:
    cout<<"opcion no valida marque una opcion del menu"<<endl;
    break;
}


return 0;
}