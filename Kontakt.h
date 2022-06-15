#include <string>
#pragma once

using namespace std;

class Kontakt
{
  public:
	Kontakt(const int Id, const string strNachname, const string strVorname,
     const string strGeburstdatum, const string strStrasse, const string strHausNummer,
	 const string strPlz, const string strOrt, const string strGeschlecht, 
	 const string strTelefonnummer, const string strMobilnummer, const string strEmailAdresse);

	 Kontakt(const Kontakt &obj);
	 void DatenAusgeben() const;
	 Kontakt DatenEingeben()const;
	 int getID() const;
	 string GetVorname() const;
     string GetNachname() const;
	 string Getgeburstdatum() const;
	 string GetStrasse() const;
	 string GetHausnummer() const;
	 string GetPlz() const;
	 string GetOrt() const;
	 string Getgeschlecht() const;
	 string GetTelefonnummer() const;
	 string GetMobilnummer() const;
	 string GetEmailAdresse() const;
	 void setId(int id);
	 void setVorname(string Vorname);
	 void setNachname(string Nachname);
	 void setgeburstdatum(string Geburstdatum);
	 void setStrasse(string strasse);
	 void setHausnummer(string Hausnummer);
	 void setPlz(string plz);
	 void setOrt(string Ort);
	 void setgeschlecht(string geschlecht);
	 void setTelefonnummer(string Telefonnummer);
	 void setMobilnummer(string Mobilnummer);
	 void setEmailAdresse(string EmailAdresse);
	 string geschlechtListe(const string geschlechtkuerzel) const;

	~Kontakt();

  private:
	 int Id;
	string strNachname;
	string strVorname;
	string strGeburstdatum;
	string strStrasse;
	string strHausNummer;
	string strPLz;
	string strOrt;
	string strGeschlecht;
	string strTelefonnummer;
	string strMobilnummer;
	string strEmailAdresse;
};


