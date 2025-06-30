#include <iostream>
#include <locale.h>

using namespace std;

int main(){

    setlocale(LC_ALL,"");

    int a,b,c;

    cout<<"Podaj liczbe a: ";
    cin>>a;
    cout<<"\n";

    cout<<"Podaj liczbe b: ";
    cin>>b;
    cout<<"\n";

    cout<<"Podaj liczbe c: ";
    cin>>c;
    cout<<"\n";

    if(a==1 && c%2==0){

        cout<<"Suma b i c jest rowna: "<<b+c<<"\n";
        cout<<"Liczba a jest rowna: "<<a<<"\n";

    }else if(a==1 && c%2!=0){

        cout<<"Suma b i c jest rowna: "<<b+c<<"\n";
        cout<<"b/a = "<<b/(double)a<<"\n";

    }else if(a==3 && c%2==0){

        cout<<"Liczba c jest rowna: "<<c<<"\n";
        cout<<"Liczba a jest rowna: "<<a<<"\n";

    }else if(a==3 && c%2!=0){

        cout<<"Liczba c jest rowna: "<<c<<"\n";
        cout<<"b/a = "<<b/(double)a<<"\n";

    }else if(a==3){ //jeżeli liczba a jest równa trzy, to wypisuje wartość liczby c na ekranie

        cout<<"Liczba c jest rowna: "<<c<<"\n";

    }else if(a==1){ //jeżeli liczba a jest równa jeden sumuje liczby b oraz c i wypisuje wynik

        cout<<"Suma b i c jest rowna: "<<b+c<<"\n";

    }else if(c%2==0){ //jeżeli c jest liczbą parzystą, to wypisuje wartość liczby a na ekranie

        cout<<"Liczba a jest rowna: "<<a<<"\n";

    }else if(c%2!=0){ //jeżeli c nie jest liczbą parzystą, to wypisuje wartość dzielenia liczby b przez a

        cout<<"b/a = "<<b/(double)a<<"\n";

    }else{

        cout<<"Zaden warunek nie zostal spelniony\n";

    }

    system("pause");

    return 0;
}