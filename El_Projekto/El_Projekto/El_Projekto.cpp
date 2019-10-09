#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int main()
{
	float x, epsilon, licznik, mianownik, wynik, wynik_ulamka, wynik2;
	bool czy_dodac = false;

	cout << "Podaj x: ";
	cin >> x;
	cout << "Podaj Epsilon: ";
	cin >> epsilon;

	licznik = 0.5;
	mianownik = -1;
	wynik = 0;

	while (true) {
		czy_dodac = !czy_dodac;
		licznik *= x * x;
		mianownik += 2;
		wynik_ulamka = licznik / mianownik;
		if (czy_dodac == false)
		{
			wynik2 = wynik - wynik_ulamka;
		}
		else
		{
			wynik2 = wynik + wynik_ulamka;
		}
		if (abs(wynik - wynik2) <= epsilon){
			wynik = wynik2;
			break;
		}else{
			wynik = wynik2;
		}
	}
		cout << "Wynik: " << wynik;


	return 0;
}
