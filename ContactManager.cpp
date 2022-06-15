// ContactManager.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//
#include "Kontakt.h"
#include "KontaktManager.h"
#include <iostream>

using namespace std;

void printMenu()
{
    cout << "(1) Kontaktliste einlesen \n"
         << "(2) Kontaktliste ausgeben \n"
         << "(3) Kontaktliste ausgeben(verkürzt) \n"
         << "(4) Kontakt einfügen \n"
         << "(5) Kontakt löschen \n"
         << "(6) Kontaktliste speichern \n"
         << "(x) Programm beenden"      
         << endl;
}

int main()
{
    // Anpassung an nationale Besonderheiten ( bspw. Anzeigen deutscher Umlaute etc. )
    setlocale(LC_ALL, "");

    KontaktManager manager;
    char menuPunkt;
    int Kontakte_ID;

    do 
    {
        printMenu();
        cout << "Menue-Wahl :";
        cin >> menuPunkt;

        switch (menuPunkt)
        {
          case '1':
            manager.DateiEinlesen("Kontakte.txt");
            break;

          case '2':
            manager.KontaktAnzeigen();
            break;

          case '3':
            manager.KontaktListeSpeichern();
            break;

          case '4':
            manager.KontaktHinzufuegen();
            cout << endl;
            break;

          case '5':
            cout << " welche Kontakte möchten sie löschen :";
            cin >> Kontakte_ID ;
            manager.KontaktLoeschen(Kontakte_ID);
            break;

          case '6':
              manager.KontaktListeSpeichern();
              break;
              cout << endl;

          case 'x':
             cout << "\nProgramm wird beendet!" << endl;
              break;

          default:
              cout << "\nUnbekannte Eingabe!" << endl;
               break;
        }

    } while (menuPunkt != 'x');

    return 0;
}

