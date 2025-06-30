/*Program, który oblicza wartości funkcji . (użytkownik podaje argument funkcji – x, a program
oblicza wartość funkcji)*/

#include <iostream>
#include<locale.h>
#include <iomanip> //użyte dla setprecision()
#include <cmath>

using namespace std;

int main(){

    setlocale(LC_ALL,"");

    double x;
    

    cout<<"Obliczanie funkcji f(x)=√x \n";
    cout<<"Podaj dla jakiego x obliczyć funkcję: ";
    cin>>x;
    cout<<"\n";

    if(x<0){
        cout<<"Nie pierwiastkujemy liczb ujemnych.\n";
    }else {
        double rootOf=sqrt(x);
        cout << fixed << setprecision(2); //ogranicza wyświetlanie do 2 miejsc po przecinku, fixed pokazuje stałą liczbę miejsc po przecinku
        cout<<"Pierwiastek z Twojej liczby to: "<<rootOf<<endl;
    }

    system("pause");
    return 0;
}