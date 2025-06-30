#include <iostream>
#include <locale.h>

using namespace std;

int main(){

    setlocale(LC_ALL,"");

    int cyfra;

    cout<<"Podaj cyfre od 0-9: ";
    cin>>cyfra;

    cout<<"Podales liczbę: ";

    switch(cyfra) {
        case 0:
            cout<<"zero";
            break;
        case 1:
            cout<<"jeden";
            break;
        case 2:
            cout<<"dwa";
            break;
        case 3:
            cout<<"trzy";
            break;
        case 4:
            cout<<"cztery";
            break;
        case 5:
            cout<<"piec";
            break;
        case 6:
            cout<<"szesc";
            break;
        case 7:
            cout<<"siedem";
            break;
        case 8:
            cout<<"osiem";
            break;
        case 9:
            cout<<"dziewiec";
            break;
        default: 
            cout<<"Podana liczba jest nieprawidlowa";
            break;

    }
    cout<<"\n";

    system("pause");
    return 0;
}

/* Tutaj wersja jak można zrobić to krócej i czytelniej

#include <iostream>
using namespace std;

string cyfraNaSlowo(int cyfra) {
    switch(cyfra) {
        case 0: return "zero";
        case 1: return "jeden";
        case 2: return "dwa";
        case 3: return "trzy";
        case 4: return "cztery";
        case 5: return "piec";
        case 6: return "szesc";
        case 7: return "siedem";
        case 8: return "osiem";
        case 9: return "dziewiec";
        default: return "nieprawidlowa cyfra";
    }
}

int main() {
    int cyfra;
    cout << "Podaj cyfre od 0 do 9: ";
    cin >> cyfra;

    cout << "Podales liczbe: " << cyfraNaSlowo(cyfra) << endl;

    return 0;
}
*/