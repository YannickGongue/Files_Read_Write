#include "KontaktManager.h"
#include "Kontakt.h"
#include <fstream>  
#include <iostream>

KontaktManager::KontaktManager()
{
}

KontaktManager::~KontaktManager()
{
}

void KontaktManager::DateiEinlesen(const string Kontaktliste)
{
	 //open file in input mode and read data  
	 ifstream file(Kontaktliste);
	 
	 if (!file.fail())
	 {
		 int Id;
		 string strNachname;
		 string strVorname;
		 string strGeburstdatum;
		 string strStrasse;
		 string strHausNummer;
		 string strPlz;
		 string strOrt;
		 string strGeschlecht;
		 string strTelefonnummer;
		 string strMobilnummer;
		 string strEmailAdresse;

		 int anzahlEingelesenerKontakte = 0;

		 while (file >> Id
			        >> strVorname
			        >> strNachname
					>> strGeburstdatum
					>> strStrasse
					>> strHausNummer
			        >> strOrt
					>> strPlz
					>> strGeschlecht
					>> strTelefonnummer
					>> strMobilnummer
					>> strEmailAdresse)
		 {
			 this->listOfContact.push_back(Kontakt(Id, strNachname, strVorname, strGeburstdatum, strStrasse, strOrt,strHausNummer,
				                           strPlz, strGeschlecht, strTelefonnummer, strMobilnummer, strEmailAdresse));

			    ++anzahlEingelesenerKontakte;
		 }

		 cout << "\n" << anzahlEingelesenerKontakte
			 << ((anzahlEingelesenerKontakte == 1)
				 ? " Kontakt"
				 : " Kontakte")
			 << " eingelesen!" << endl;
	 }
}

void KontaktManager::KontaktAnzeigen() const
{
	for (const Kontakt& kontakt : this->listOfContact) // C++ 11
	{
		cout << "------------------------" << endl;
		kontakt.DatenAusgeben();
	}
}

void KontaktManager::KontaktHinzufuegen()
{
	int id;
	string Nachname;
	string Vorname;
	string Geburstdatum;
	string Strasse;
	string HausNummer;
	string Plz;
	string Ort;
	string Geschlecht;
	string Telefonnummer;
	string Mobilnummer;
	string EmailAdresse;

	cout << "neue Id eingeben :";
	cin >> id;
	cout << "neue Nachname eingeben :";
	cin >> Nachname;
	cout << "neue Vorname eingeben :";
	cin >> Vorname;
	cout << "neue Geburstdatum eingeben :";
	cin >> Geburstdatum;
	cout << "neue Strasse eingeben :";
	cin >> Strasse;
	cout << "neue HausNummer eingeben :";
	cin >> HausNummer;
	cout << "neue Plz eingeben :";
	cin >> Plz;
	cout << "neue Ort eingeben :";
	cin >> Ort;
	cout << "neue Geschlecht eingeben :";
	cin >> Geschlecht;
	cout << "neue Telefonnummer eingeben :";
	cin >> Telefonnummer;
	cout << "neue Mobilnummer eingeben :";
	cin >> Mobilnummer;
	cout << "neue EmailAdresse eingeben :";
	cin >> EmailAdresse;

	Kontakt NewContact(id, Vorname, Nachname, Geburstdatum, Strasse, Ort, HausNummer, Plz,
		Geschlecht, Telefonnummer, Mobilnummer, EmailAdresse);

	this->listOfContact.push_back(NewContact);
}

void KontaktManager::KontaktLoeschen(int id)
{
	for (const Kontakt& kontakt : this->listOfContact) // C++ 11
	{
		if (kontakt.getID() == id)
		{
		  this->listOfContact.erase(listOfContact.begin()+(id - 1));
		  this->newListOfContact = this->listOfContact;
		  break;
		}
	}
}

void KontaktManager::KontaktListeSpeichern()
{
	string NewKontakteListe = "NewKOntaktlist.txt";
	ofstream file(NewKontakteListe, ios::out | ios::ate);

		if (!file.fail())
		{
			for (const Kontakt& kontakt : this->newListOfContact)
			{
				file << kontakt.getID() << " "
				     << kontakt.GetVorname() << " "
					 << kontakt.GetNachname() << " "
					 << kontakt.Getgeburstdatum() <<" "
					 << kontakt.GetStrasse() << " "
					 << kontakt.GetOrt() << " "
					 << kontakt.GetHausnummer() << " "
					 << kontakt.Getgeschlecht() << " "
					 << kontakt.GetTelefonnummer() << " "
					 << kontakt.GetMobilnummer() << " "
					 << kontakt.GetEmailAdresse() 
					 << endl;
			}
		
			file.close();
			cout << "Kontaktliste gespeichert." << endl;
		}
		else
		{
			cout << "Kontaktliste konnte nicht gespeichert werden!" << endl;
		}
		
}
