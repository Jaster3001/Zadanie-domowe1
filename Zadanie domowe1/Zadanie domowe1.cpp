#include <iostream>
#include <iomanip>
using namespace std;

void main(void)
{
	double a, b, c; // Inicjalizacja zmiennych a, b i c (Zmieniony został typ zmiennych by obliczenia były poprawne)
	cout << "Podaj a: "; // wyświetlenie na ekranie tekstu "podaj a: "
	cin >> a; // wymuszenie wprowadzenia wartości a, przez użytkownika
	cout << "Podaj b: "; // wyświetlenie na ekranie tekstu "podaj b: "
	cin >> b; // wymuszenie wprowadzenia wartości a, przez użytkownika
	c = (a + b) / 2; // wykonanie obliczeń i przypisanie ich wyniku do zmiennej c
	cout << "Wynik to: " << c << endl; // Wyświetlenie na ekranie "wynik to: " oraz wartości zmiennej c
	double d, e, f, g, h;// 1. Zarezerwuj pamięć na 4 zmienne typu rzeczywistego: d, f, g oraz h.
	cout << "Podaj d "; // 2. Poproś użytkownika o podanie wartości zmiennej d.
	cin >> d;// 3. Pobierz wartość zmiennej d z klawiatury.
	cout << "Podaj f "; // 4. Poproś użytkownika o podanie wartości zmiennej f.
	cin >> f;// 5. Pobierz wartość zmiennej f z klawiatury.
	g = (d + f) / (d - f);// 6. Oblicz wartość wyrażenia: (𝒅+𝒇)/(𝒅−𝒇), i wynik umieść w zmiennej g.
	h = d * d + (f / g);	// 7. Oblicz wartość wyrażenia: 𝒅𝟐 +𝒇/𝒈, i wynik zapisz do zmiennej h.
	cout << "Wynik g : " << g << ", wynik h : " << h;// 8. Wypisz zmienne: g i h, w następujący sposób:
}
