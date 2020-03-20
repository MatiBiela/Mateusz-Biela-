#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct osoba {
	string imie;
	string nazwisko;
	string klasa;
	int wiek;
	double srednia;
};

void wypisz(struct osoba)

	{

		cout<<osoba.imie;
		cout<<osoba.nazwisko;
		cout<osoba.klasa;
		cout<<osoba.srednia;
		cout<<osoba.wiek;
}

	
int main(int argc, char** argv) {


	osoba uczen1;
	uczen1.imie="Mateusz";
	uczen1.nazwisko="Biela";
	uczen1.klasa="IGTP";
	uczen1.srednia=5;
	uczen1.wiek=17;
	
	void wypisz(uczen1)
	{
		cout<<uczen1.imie;
		cout<<uczen1.nazwisko;
		cout<<uczen1.klasa;
		cout<<uczen1.srednia;
		cout<<uczen1.wiek;
	}
	
	
		osoba uczen1;
	uczen1.imie="Jan";
	uczen1.nazwisko="Kowalski";
	uczen1.klasa="IGTP";
	uczen1.srednia="3";
	uczen1.wiek="17";
		osoba uczen1;
		
		
	uczen1.imie="Adam";
	uczen1.nazwisko="Mucha";
	uczen1.klasa="IGTP";
	uczen1.srednia="3";
	uczen1.wiek="17";
	
	
	
	
	
	
	
	return 0;
}
