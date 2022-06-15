#include "Kontakt.h"
#include <string>
#include <iostream>
#define MAX_WERT =  300;


using namespace std;

Kontakt::Kontakt( const int id, const string Nachname, 
	const string Vorname, const string Geburstdatum, 
	const string Strasse, const string HausNummer, 
	const string Plz, const string Ort, const string Geschlecht, 
	const string Telefonnummer, const string Mobilnummer, const string EmailAdresse):
	Id(id),
	strNachname(Nachname),
	strVorname(Vorname),
	strGeburstdatum(Geburstdatum),
	strStrasse(Strasse),
	strHausNummer(HausNummer),
	strPLz(Plz),strOrt(Ort),
	strGeschlecht(Geschlecht),
	strTelefonnummer(Telefonnummer),
	strMobilnummer(Mobilnummer),
	strEmailAdresse(EmailAdresse)
{
	
}

Kontakt::Kontakt(const Kontakt &obj):
	Id(obj.Id),
	strVorname(obj.strVorname),
	strNachname(obj.strNachname),
    strGeburstdatum(obj.strGeburstdatum),
	strStrasse(obj.strStrasse), 
	strHausNummer(obj.strHausNummer), 
    strPLz(obj.strPLz), 
	strOrt(obj.strOrt),
    strGeschlecht(obj.strGeschlecht), 
	strTelefonnummer(obj.strTelefonnummer),
    strMobilnummer(obj.strMobilnummer),
	strEmailAdresse(obj.strEmailAdresse)
{
	
}

void Kontakt::DatenAusgeben() const
{
	cout << "Id:" << this->getID() << "\n"
		<< "Nachname :" << this->GetNachname() << "\n"
		<< "Vorname :" << this->GetVorname() << "\n"
		<< "Geburstsdatum :" << this->Getgeburstdatum() << "\n"
		<< "straße :" << this->GetStrasse() << "\n"
		<< "Hausnummer :" << this->GetHausnummer() << "\n"
		<< "Plz :" << this->GetPlz() << "\n"
		<< "Ort :" << this->GetOrt() << "\n"
		<< "Geschlecht :" << this->geschlechtListe(this->Getgeschlecht()) << "\n"
		<< "Telefonnummer :" << this->GetTelefonnummer() << "\n"
		<< "Mobilnummer :" << this->GetMobilnummer() << "\n"
		<< "EmailAdresse :" << this->GetEmailAdresse() << "\n";
}

Kontakt Kontakt::DatenEingeben() const
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

	Kontakt NewContact(id, Nachname, Vorname, Geburstdatum, Strasse, HausNummer, Plz, Ort,
		               Geschlecht, Telefonnummer, Mobilnummer, EmailAdresse);

	return NewContact;
}

int Kontakt::getID() const
{
	return this->Id;
}

string Kontakt::GetVorname() const
{
	return this->strVorname;
}

string Kontakt::GetNachname() const
{
	return this->strNachname;
}

string Kontakt::Getgeburstdatum() const
{
	return this->strGeburstdatum;
}

string Kontakt::GetStrasse() const
{
	return this->strStrasse;
}

string Kontakt::GetHausnummer() const
{
	return this->strHausNummer;
}

string Kontakt::GetPlz() const
{
	return this->strPLz;
}

string Kontakt::GetOrt() const
{
	return this->strOrt;
}

string Kontakt::Getgeschlecht() const
{
	return this->strGeschlecht;
}

string Kontakt::GetTelefonnummer() const
{
	return this->strTelefonnummer;
}

string Kontakt::GetMobilnummer() const
{
	return this->strMobilnummer;
}

string Kontakt::GetEmailAdresse() const
{
	return this->strEmailAdresse;
}

void Kontakt::setId(int id)
{
	this->Id = id;
}

void Kontakt::setVorname(string Vorname)
{
	this->strVorname = Vorname;
}

void Kontakt::setNachname(string Nachname)
{
	this->strNachname = Nachname;
}

void Kontakt::setgeburstdatum(string Geburstdatum)
{
	this->strGeburstdatum = Geburstdatum;
}

void Kontakt::setStrasse(string strasse)
{
	this->strStrasse = strasse;
}

void Kontakt::setHausnummer(string Hausnummer)
{
	this->strHausNummer = Hausnummer;
}

void Kontakt::setPlz(string plz)
{
	this->strPLz = plz;
}

void Kontakt::setOrt(string Ort)
{
	this->strOrt = Ort;
}

void Kontakt::setgeschlecht(string geschlecht)
{
	this->strGeschlecht = geschlecht;
}

void Kontakt::setTelefonnummer(string Telefonnummer)
{
	this->strTelefonnummer = Telefonnummer;
}

void Kontakt::setMobilnummer(string Mobilnummer)
{
	this->strMobilnummer = Mobilnummer;
}

void Kontakt::setEmailAdresse(string EmailAdresse)
{
	this->strEmailAdresse = EmailAdresse;
}

string Kontakt::geschlechtListe(const string geschlechtkuerzel) const
{
	string strGender;

	if (geschlechtkuerzel == "m")
	{
		strGender = "männlich";
	}
    else if(geschlechtkuerzel == "w")
	{
		strGender = "weiblich";
	}
	else
	{
		strGender = "undefiniert";
	}

	return strGender;
}

Kontakt::~Kontakt()
{
}
