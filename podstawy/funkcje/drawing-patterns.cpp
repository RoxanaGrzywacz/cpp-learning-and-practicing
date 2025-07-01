#include<iostream>
#include<locale.h>

using namespace std;

void patterns(int a, char b){
     for (int i=0;i<a;i++){
        cout<<b;
     }
     cout<<"\n";
}

int main(){
    setlocale(LC_ALL,"");

    int a;
    char b;

    cout<<"Podaj liczbe dodatnia rozna od 0: ";
    cin>>a;

    cout<<"Podaj znak: ";
    cin>>b;

    if(a<=0){
        cout<<"Dla podanej cyfry nie jestem w stanie wypisac symbolu \n";
        return 1;
    }

    patterns(a, b);

    system("pause");
    return 0;
}