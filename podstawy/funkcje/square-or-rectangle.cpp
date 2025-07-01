#include <iostream>
#include <locale.h>

using namespace std;

bool isSquare(double a,double b){
    if (a==b) return true;
    else return false;
}

double calculateArea(double a, double b){
    return a*b;
}

double calculatePerimeter(double a, double b){
    return 2*(a+b);
}

int main(){
    setlocale(LC_ALL,"");

    double a, b;
    cout<<"Podaj liczbe a: ";
    cin>>a;
    cout<<"\n";
    cout<<"Podaj liczbe b: ";
    cin>>b;
    cout<<"\n";

    if(a<=0 || b<=0){
        cout<<"Bok nie moze byc ujemny ani zerowy\n";
        return 1;
    }

    calculateArea(a,b);
    calculatePerimeter(a,b);


    if(isSquare(a, b)){
        cout<<"Na podstawie podanych bokow moge przypuszczac, ze jest to kwadrat\n";
        cout<<"Pole kwadratu = "<<calculateArea(a,b)<<"\n";
        cout<<"Obwod kwadratu = "<<calculatePerimeter(a,b)<<"\n";
    }else{
        cout<<"Na podstawie podanych bokow moge przypuszczac, ze jest to prostokat \n";
        cout<<"Pole prostokata = "<<calculateArea(a,b)<<"\n";
        cout<<"Obwod prostokata = "<<calculatePerimeter(a,b)<<"\n";
    }

    system("pause");
    return 0;
}