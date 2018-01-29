#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>

using namespace std;
int liczba;
string imie;

int main()
{
	cout << "Podaj swoje imie: ";
	cin >> imie;

	cout << "Podaj swoja ulubiona liczbe: ";
	cin >> liczba;

	system("cls");

	cout << "No to zaczynamy " << imie << "!"<< endl;
	cout << "Niech liczba " << liczba << " bedzie Ci szczesliwa!";

	_getch();
	return 0;
}
