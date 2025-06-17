//hacer un menu que diga la moneda que tiene y a la moneda la cual quiere pasar
#include <iostream>
using namespace std;

int main()
{
    int i=1,a,c;
    float b,p;


cout<<"---cambio de monedas---"<<endl;    
cout<<"moneda que desea cambiar"<<endl;
cout<<"1-peso colombiano"<<endl;
cout<<"2-peso mexicano"<<endl;
cout<<"3-dolar estado unidense"<<endl;
cout<<"4-dolar australiano"<<endl;
cout<<"5-yuan chino"<<endl;
cout<<"6-euro español"<<endl;

cin>>a;

switch (a)
{
case 1:
    cout<<"usted cuenta con peso colombiano"<<endl;
    break;
case 2:
    cout<<"usted cuenta con peso mexicano"<<endl;
    break;
case 3:
    cout<<"usted cuenta con dolar estado unidense"<<endl;
    break;
case 4:
    cout<<"usted cuenta con australiano"<<endl;
    break;
case 5:
    cout<<"usted cuenta con yuan chino"<<endl;
    break;
case 6:
    cout<<"usted cuenta con euro español"<<endl;
    break;                    

default:
    break;
}


cout<<"moneda que desea recibir"<<endl;
cout<<"1-peso colombiano"<<endl;
cout<<"2-peso mexicano"<<endl;
cout<<"3-dolar estado unidense"<<endl;
cout<<"4-dolar australiano"<<endl;
cout<<"5-yuan chino"<<endl;
cout<<"6-euro español"<<endl;

cin>>c;

switch (c)
{
case 1:
    cout<<"usted desea pasar a peso colombiano"<<endl;
    b=0.00024;
    break;
case 2:
    cout<<"usted desea pasar a peso mexicano"<<endl;
    b=217.70;
    break;
case 3:
    cout<<"usted desea pasar a dolar estado unidense"<<endl;
    b=4117.72;
    break;
case 4:
    cout<<"usted desea pasar a dolar australiano"<<endl;
    b=2685.14;
    break;
case 5:
    cout<<"usted desea pasar a yuan chino"<<endl;
    b=573.64;
    break;
case 6:
    cout<<"usted desea pasar a euro español"<<endl;
    b=4763.70;
    break;                    

default:
    break;
}

cout<<"a continuacion ingrese el monto que desea intercambiar"<<endl;
cin>>p;
cout<<"el valor del cambio es = "<<b*p<<endl;


return 0;
}