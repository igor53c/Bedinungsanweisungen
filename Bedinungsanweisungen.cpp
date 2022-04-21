// Bedinungsanweisungen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void main()
{
    // locale::global(locale("de_DE.utf-8")); 

    int a = 14;
    int b = 22;

    if( a == 14)
        cout << "Der Inhalt der Variablen 'a' ist 14" << endl;

    if(a < b)
        cout << "a ist kleiner als b" << endl;

    else 
        cout << "a ist größer oder gleich b" << endl;


    if (a == 14) 
    {
        if (b == 14)
            cout << "a == 14 und b == 14" << endl;
    }
    else
        cout << "a != 14" << endl;

    int monat = 9;
    int tage = 0;

    if (monat > 0 && monat <= 12)
    {
        if (monat == 4 || monat == 6 || monat == 9 || monat == 11)
            tage = 30;
        else if (monat == 2)
            tage = 28;
        else
            tage = 31;
    }
    else
        cerr << "Der Monat " << monat << " ist ungültig" << endl;

    if (tage > 0)
        cout << "Der Monat " << monat << " hat " << tage << " Tage" << endl;

    int max = (a > b) ? a : b;

    cout << "max: " << max << endl;

    a = 3;

    switch (a)
    {
    case 1:
        cout << "Eins" << endl;
        break;

    case 2:
        cout << "Zwei" << endl;
        break;

    case 3:
        cout << "Drei" << endl;
        break;

    default:
        cout << "Alle anderen Zahlen" << endl;
        break;
    }

    tage = 0;

    switch (monat)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        tage = 31;
        break;

    case 4:
    case 6:
    case 9:
    case 11:
        tage = 30;
        break;

    case 2:
        tage = 28;
        break;

    default:
        cerr << "Der Monat " << monat << " ist ungültig" << endl;
        break;
    }

    if (tage > 0)
        cout << "Der Monat " << monat << " hat " << tage << " Tage" << endl;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
