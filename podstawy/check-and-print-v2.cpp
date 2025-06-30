//Program check-and-print ale bardziej optymalny z podejściem flagowym 
#include <iostream>
#include <locale.h>
using namespace std;

int main() {

    setlocale(LC_ALL,"");
    
    int a, b, c;

    cout<<"Podaj liczbe a: ";
    cin>>a;
    cout<<"\n";

    cout<<"Podaj liczbe b: ";
    cin>>b;
    cout<<"\n";

    cout<<"Podaj liczbe c: ";
    cin>>c;
    cout<<"\n";

    bool c_parzyste = (c % 2 == 0);
    bool a_jeden = (a == 1);
    bool a_trzy = (a == 3);

    if(a_jeden){
        cout <<"Suma b i c jest rowna: "<< b+c << "\n";
    }
    if(a_trzy){
        cout <<"Liczba c jest rowna: "<< c << "\n";
    }
    if(c_parzyste){
        cout <<"Liczba a jest rowna: "<< a << "\n";
    } else {
        cout <<"b/a = " << b/(double)a<< "\n";
    }
    system("pause");
    return 0;
}