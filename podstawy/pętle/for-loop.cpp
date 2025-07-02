#include<iostream>
#include<locale.h>

using namespace std;


int main (){
    setlocale(LC_ALL,"");

   int a, c, s, menu;
   int suma=0;
   char b;
   
   cout<<"MENU \n"
   <<"1. Wypisz 100 gwiazdek \n"
   <<"2. Wypisz tyle gwiazdek ile poda uzytkownik\n"
   <<"3. Wypisz szlaczek wg danych uzytkownika\n"
   <<"4. Program, ktory dodaje do siebie 10 kolejno wczytanych liczb i wypisuje wynik\n"
   <<"5. Program, ktory wczytuje 10 liczb i dodaje do siebie tylko te liczby, ktore są parzyste.\n"
   <<"6. Program, który wypisuje liczby od 1 do 30.\n"
   <<"7. Program wypisujący liczby od 25 do 5 (w kolejności malejącej).\n"
   <<"8. Program wypisujący te liczby z przedziału od 3 do 100, ktore są podzielne przez 3\n"
   <<"9. Program, ktory wypisuje te liczby z przedziału od 10 do 300, ktore są podzielne przez 3 i 5 lub 4 i 7\n"
   <<"10. Wypisz w kolejności malejącej te liczby z przedziału od 10 do 100, ktore są podzielne przez 3 lub 7, ale nie sa podzielne przez 5\n"
   <<"11. Dodawanie skoku\n";
   
   cout<<"Wybierz ktory program chcesz uruchomic. Podaj numer z MENU: ";
   cin>>menu;
   
   switch(menu){
        case 1:
            for(int i=0;i<100;i++){
            cout<<"*";
            }
        break;
        
        case 2:
            cout<<"Podaj liczbe: ";
            cin>>a;
    
            if(a<=0){
        
                cout<<"Liczba musi być dodatnia, wieksza od 0\n";
        
            }else{
        
                for(int i=0;i<a;i++){
                cout<<"*";
                }
            }
        break;
        
        case 3: 
        
            cout<<"Podaj liczbe: ";
            cin>>a;
            cout<<"Podaj znaczek: ";
            cin>>b;
    
            if(a<=0){
        
                cout<<"Liczba musi być dodatnia, wieksza od 0\n";
        
            }else{
        
                for(int i=0;i<a;i++){
                cout<<b;
                }
            }
        break;
            
        case 4:
        
            for(int i=0;i<10;i++){
            
            int liczba;
            
            cout<<"Podaj liczbę "<<i+1<<": ";
            cin>>liczba;
            
            suma += liczba;
            
            }
            cout<<"Wynik: "<<suma<<"\n";
        break;
        
        case 5:
        
            for(int i=0;i<10;i++){
            
            int liczba;
            
            cout<<"Podaj liczbę "<<i+1<<": ";
            cin>>liczba;
            
            if(liczba%2==0){
            suma += liczba;
            
            }
            cout<<"Wynik: "<<suma<<"\n";

        }
            
        break;
        
        case 6:
        
            for(int i=0;i<30;i++){
            
                cout<<i+1<<" ";
            }
            
        break;
        
        case 7:
            
            for(int i=25; i>=5; i--){
            
                cout<<i<<" ";
            }
            
        break;
    
        case 8:
            
            for(int i=3; i<=100; i++){
            
            if(i%3 == 0){
                cout<<i<<" ";
            }
        }
            
        break;
        
        case 9:
            
            for(int i=10; i<=300; i++){
            
            if((i%3 == 0 && i%5 ==0)||(i%4 == 0 && i%7 == 0)){
                cout<<i<<" ";
            }
        }
            
        break;
        
        case 10:
            
            for(int i=100; i>=10; i--){
            
            if((i%3 == 0 || i%7 == 0) && i%5 !=0){
                cout<<i<<" ";
            }
        }
            
        break;
        
        case 11:
            
            cout<<"Podaj początek przedziału: ";
            cin>>a;
        
            cout<<"Podaj koniec przedziału: ";
            cin>>c;
        
            cout<<"Podaj skok: ";
            cin>>s;
        
        
            for(int i=a; i<=c; i+=s){ //rozpoczyna petle od a, petla konczy sie gdy i przekroczy b, i+=s w każdym kroku dodaje do i wartość skoku s
            
                cout<<i<<" ";
            }
            
        break;
        
        default: 
            cout<<"Podales nieprawidlowa cyfre";
        
    }
    
   cout<<"\n";
   

    system("pause");
    return 0;
}