// ConsoleApplication37.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include "Kolo.h"
#include "prostokat.h"
#include "trapez.h"
#include "trojkat.h"
#include"szescian.h"
#include <vector>

using namespace std;
int wybor1;
std::string wybor2;
vector <Kolo> kola;
vector <prostokat> prostokaty;
vector <trapez> trapezy;
vector <trojkat> trojkaty;
vector <szescian> szesciany;

unsigned int dodawanie_kola()
{
    unsigned int temp;
    cout << "wprowadz promien kola\n";
    cin >> temp;
    return temp;
}

unsigned int dodawanie_prostokata()
{
    unsigned int temp;
    cout << "wprowadz bok prostokata\n";
    cin >> temp;
    return temp;
}
unsigned int dodawanie_boku_trapeza()
{
    unsigned int temp;
    cout << "wprowadz bok trapeza\n";
    cin >> temp;
    return temp;
}
unsigned int dodawanie_wysokosci_trapeza()
{
    unsigned int temp;
    cout << "wprowadz wysokosc trapeza\n";
    cin >> temp;
    return temp;
}
unsigned int dodawanie_boku_trojkata()
{
    unsigned int temp;
    cout << "wprowadz bok trojkata\n";
    cin >> temp;
    return temp;
}
unsigned int dodawanie_wysokosci_trojkata()
{
    unsigned int temp;
    cout << "wprowadz wysokosc trojkata\n";
    cin >> temp;
    return temp;
}
unsigned int dodawanie_szescianu()
{
    unsigned int temp;
    cout << "wprowadz krawedz szescianu\n";
    cin >> temp;
    return temp;
}

int main()
{
    while (true)
    {
        cout << endl << "dodaj sobie figure\n";
        cout << "1. - kolo\n";
        cout << "2. - prostokat\n";
        cout << "3. - trapez\n";
        cout << "4. - trojkat\n";
        cout << "5. - szescian\n";
        cout << "(PAPIEZOWA). - wyswitl obiekty danej klasy\n";
        cin >> wybor1;
        if (wybor1 == 1)
        {
            system("cls");
            Kolo nowe(dodawanie_kola());
            kola.push_back(nowe);
        }
        else if (wybor1 == 2)
        {
            system("cls");
            prostokat nowe(dodawanie_prostokata(), dodawanie_prostokata());
            prostokaty.push_back(nowe);
        }
        else if (wybor1 == 3)
        {
            system("cls");
            trapez nowe(dodawanie_boku_trapeza(), dodawanie_boku_trapeza(), dodawanie_wysokosci_trapeza());
            trapezy.push_back(nowe);
        }
        else if (wybor1 == 4)
        {
            system("cls");
            trojkat nowe(dodawanie_boku_trojkata(), dodawanie_wysokosci_trojkata());
            trojkaty.push_back(nowe);
        }
        else if (wybor1 == 5)
        {
            system("cls");
            szescian nowe(dodawanie_szescianu());
            szesciany.push_back(nowe);
        }
        else if (wybor1 == 2137)
        {
            system("cls");
            cout << "wybierz klase: kolo; prostokat; trapez; trojkat szescian;\n";
            cin >> wybor2;
            if (wybor2 == "kolo") { for (int i = 0; i < kola.size(); i++) { cout << i + 1 << " " << kola[i].getpole()<< endl; } }
            else if (wybor2 == "prostakat") { for (int i = 0; i < prostokaty.size(); i++) { cout << i + 1 <<" "<< prostokaty[i].getpole() << endl; } }
            else if (wybor2 == "trapez") { for (int i = 0; i < trapezy.size(); i++) { cout << i + 1 << " " << trapezy[i].getpole() << endl; } }
            else if (wybor2 == "trojkat") { for (int i = 0; i < trojkaty.size(); i++) { cout << i + 1 << " " << trojkaty[i].getpole() << endl; } }
            else if (wybor2 == "szescian") { for (int i = 0; i < szesciany.size(); i++) { cout << i + 1 << " " << szesciany[i].getobjetosc() <<endl; } }
            else { system("cls"); cout << "blednie podany wybor, sproboj ponownie\n"; }
        }
        else { system("cls"); cout << "blednie podany wybor, sproboj ponownie\n"; }
    }
}


