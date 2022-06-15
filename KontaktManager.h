#pragma once
#include "Kontakt.h"
#include <vector>


class KontaktManager
{
 public:
	KontaktManager();
	~KontaktManager();
	void DateiEinlesen(const string Kontaktliste);
	void KontaktAnzeigen() const;
	void KontaktHinzufuegen();
	void KontaktLoeschen(int id);
	void KontaktListeSpeichern();

 private:
	vector<Kontakt> listOfContact;
	vector<Kontakt> newListOfContact;
	string Dateiname;

};

