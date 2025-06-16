#include <iostream>
using namespace std;

int main()
{ 
    int red=0;

    cout<<"hola perrita puta"<<endl;
    cout<<"quieres salchicha"<<endl;
    cout<<"marque 1 si la respesta es si"<<endl;
    cout<<"marque 2 si la respesta es no"<<endl;

    cin>>red;

    switch (red)
    {
    case 1 : 
        cout<<"caccorro malparido jaja"<<endl;
            break;
    
    case 2 : 
        cout<<"no quieres probar la mia papi rico ;)"<<endl;
            break;
    

    default:
        cout<<"opcion invalida X"<<endl;
        break;
    }

return 0;
}