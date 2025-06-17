//numeros positivos negativos y 0 usando if y else
#include <iostream>
using namespace std;

int main()
{
int q;

cout<<"¿quieres saber si tu numero es positivo negativo o cero?"<<endl;
cout<<"digita un numero"<<endl;
cin>>q;

if (q>=1){
    cout<<"tu numero "<<q<<" es positivo"<<endl;
}
else if (q==0){
    cout<<"tu numero "<<q<<" es 0"<<endl;
}
else  {
    cout<<"tu numero "<<q<<" es negativo"<<endl;
}

return 0;
}