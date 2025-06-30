#include <iostream>
#include <locale.h>
using namespace std;

int main() {
    setlocale(LC_ALL, "");

    int a, b, c;
    cout << "Podaj 3 liczby: \n";
    cin >> a >> b >> c;

    bool wypisano = false;

    if (a==1) {
        cout << "* ";
        wypisano = true;
    }
    if (b==3) {
        cout << "# ";
        wypisano = true;
    }
    if (c<7) {
        cout << "+++";
        wypisano = true;
    }

    if (!wypisano) {
        cout << "Nie podales liczb uruchamiajacych program";
    }

    cout << "\n";

    system("pause");
    return 0;
}