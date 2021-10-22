#include <iostream>

/* Zmieniając ostatnią literę w poniższej instrukcji na D (dodatkowe), lub P (podstawowe)
*  wybierasz aktywne zadanie.
*
*  UWAGA: jeśli rozwiązanie zadań wymaga podziału programu na pliki to dodaj je wszystkie do
*  projektu, ale przy każdym zadaniu "includuj" tylko te, które jego dotyczą.
*
*/
#define ZadanieD 

#ifdef ZadanieD

#include <cmath>
#include<iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	unsigned int n;
	char c, z;
	cout << "Wprowadź znak c :";
	cin >> c;
	cout << "Wprowadź liczbę n :";
	cin >> n;
	z =c+n-95;
	z = abs(z);
	cout << "z  to:" << z << " (" << (int)z<<")";

}
#endif

#ifdef ZadanieP

#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	setlocale(LC_ALL, "");
	double x, a, b, c, f, g, h;		
	const double pi = 3.1415;
	const double e = 2.7182;
	const double D = 2.5;
	const double E = (5 * pi * sqrt(5));			//deklaracja wszystkich zmiennych i stałych (dodano f, g, i h jako zmienne dla czytelności kodu)

	cout << "Wprowadź zmienną x:"; cin >> x;
	cout << "Wprowadź zmienną a:"; cin >> a;
	cout << "Wprowadź zmienną b:"; cin >> b;
	cout << "Wprowadź zmienną c:"; cin >> c;		//Przypisanie wartości zmiennych z klawiatury

	f = E + D * pow((2 * (b / (5 + a)) * x + log(c)), (e + (x / 2)));
	g = E * abs(a * x * x * x - D) / (b * x * x + c * x);
	h = abs((a * sin(x*E) + b * cos(x*E)) / (D * (c + 5)));
	cout << setprecision(3);
	cout << "f(x) wynosi: " << f << endl << "g(x) wynosi: " <<  g << endl << "h(x) wynosi: " << h;	 //wypisanie wyników
}

#endif




