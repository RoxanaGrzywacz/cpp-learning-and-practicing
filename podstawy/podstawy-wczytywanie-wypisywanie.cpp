#include<iostream>
#include<cmath>
#include <locale.h>
using namespace std;

int main(){
    setlocale(LC_ALL, "");
    int a,b;
    
    cout<<"Podaj liczbe calkowita ";
    cin>>a;
    
    //Sprawdzenie czy liczba jest parzysta
    if (a%2==0){
        cout<<"* Liczba jest parzysta\n";
    }else {
        cout<<"* Liczba nie jest parzysta\n";
    }
    cout<<"------------------------------\n";
    
    //Sprawdzenie czy liczba jest ujemna czy dodatnia czy =0
    cout<<"Sprawdzam inne parametry...\n\n";
    
    if(a>0){
        cout<<"* Liczba jest dodatnia\n";
    }else if(a<0){
        cout<<"* Liczba jest ujemna\n";
    }else{
        cout<<"* Liczba to 0\n";
    }
    
    cout<<"------------------------------\n";
    
    cout<<"Podaj druga liczbe: ";
    cin>>b;
    
    //Sprawdzenie czy liczba jest taka sama jak pierwsza oraz która jest większa
    if (a==b){
        cout<<"* Liczba jest taka sama jak pierwsza\n";
    }else {
        cout<<"* Liczba jest inna niz pierwsza\n";
        
        if(a>b){
            
            cout<<"* Liczba "<<a<<" jest wieksza od "<<b<<".\n";
            
        }else if(b>a){
            
            cout<<"* Liczba "<<b<<" jest wieksza od "<<a<<".\n";
        }
    }
    
    cout<<"------------------------------\n";
    
    cout<<"Sprawdzam pierwsza liczbe czy nadaje sie na obliczenie pola i obwodu kwadratu...\n\n";
    
    //Sprawdzenie czy liczba nadaje się do działań na kwadracie
    if(a>0){
        int pole=a*a;
        int obw=4*a;
        cout<<"* Liczba jest ok. Pole kwadratu o boku rownym Twojej pierwszej liczbie wynosi: "<<pole<<".\n";
        cout<<"* Obwod tego kwadratu jest rowny: "<<obw<<".\n";
    }else if(a==0){
        cout<<"* Liczba jest ok ale wyjdą same zera" <<".\n";
        }else{
        cout<<"* Ta liczba jest ujemna i nie nadaje sie na obliczanie pola i obwodu kwadratu\n";
    }
    cout<<"------------------------------\n";
    
    cout<<"Szukam teraz liczby odwrotnej do pierwszej wczytanej liczby...\n\n";
    
    //Szukanie liczby odwrotnej
    if(a !=0){
        double odwr=1/(double)a;
        cout<<"Przypomnijmy sobie Twoja liczbe: "<<a<<"\n\n";
        cout<<"* Jej odwrotnosc to: "<<odwr<<"\n";
    }else {
        cout<<"* Nie dzielimy przez 0";
    }
    
    cout<<"------------------------------\n";
    
    //Sprawdzanie przedzialów
    cout<<"Sprawdzam czy Twoja pierwsza liczba nalezy do przedzialu (-5,5)...\n\n";
    
    if(a<5 && a>-5){
        cout<<"* Tak. Ta liczba miesci się w tym przedziale\n";
    }else{
        cout<<"* Niestety ta liczba lezy poza tym przedziałem\n";
    }
    
    cout<<"------------------------------\n";
    cout<<"Sprawdzam czy Twoja druga liczba nalezy do przedzialu (-nieskonczonosc,5)suma<10,nieskonczonosc)...\n";
    
    if(b<5 || b>=10){
        cout<<"* Tak. Druga liczba miesci sie w tym przedziale\n";
    }else{
        cout<<"* Ta liczba sie nie miesci w tym przedziale\n";
    }

    system("pause");
    return 0;
}
