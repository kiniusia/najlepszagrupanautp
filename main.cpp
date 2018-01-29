#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>

using namespace std;
int liczba;
string imie;

int main()
{
	int a;
	cout << "Podaj swoje imie: ";
	cin >> imie;

	cout << "Podaj swoja ulubiona liczbe: ";
	cin >> liczba;
	
	cout << "Podaj plec: (k/m)";
	cin >> a;
	while (a == k)
	{
		cout << "Uzytkownik jest plci zenskiej" << endl;
	}
	else
	{
		cout << "Uzytkownij jest plci meskiej" << endl;
	}

	system("cls");

	cout << "No to zaczynamy " << imie << "!"<< endl;
	cout << "Niech liczba " << liczba << " bedzie Ci szczesliwa!";

	_getch();
	return 0;
}
