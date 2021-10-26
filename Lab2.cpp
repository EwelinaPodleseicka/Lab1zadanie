
#include<iostream>
#include<cstdlib>
using namespace std;


int main()

{
	//zad1//
	\
		float a = -1, b = 2, x;

	//	cout << "Podaj a:", cin >> a;
	//	cout << "Podaj b:", cin >> b;

	if (a == 0)
		cout << "rownanie sprzeczne\n";
	else
		cout << "x = " << -b / a << endl;

	//zad2//
	float c = 1, delta;
	delta = b * b + 4 * a * c;
	if (a != 0) {
		if (delta < 0) cout << "brak rozw\n";
		else if (delta == 0) cout << "jedno rozw\n";
		else  cout << " dwa rozw\n";
	}
	else cout << "funkcja liniowa lub sprzeczna\n>>";

	//zad3//
	float deltaS;
	deltaS = sqrt(b * b + 4 * a * c);
	if (a != 0) {
		if (delta < 0) cout << "brak rozw\n";
		else if (delta == 0) cout << (-b / (2 * a));
		else if (delta > 0) cout << "x1 = " << ((-b - deltaS) / (2 * a)) << "\tx2 = " << ((-b + deltaS) / (2 * a));
	}
	else cout << "funkcja liniowa lub sprzeczna\n>>";

	//zad4//
	cout << "podaj x: ", cin >> x;
	if (x < 0)			 cout << "x= " << -3 * x << "\t";
	else if (x == 0)	cout << "x= " << 0 << "\t";
	else if (x > 0)		 cout << "x= " << 2 * x << "\t";
	//b(x)
	if (x >= 1)			 cout << "x= " << pow(x, 2) << "\t";
	else 				cout << "x= " << x << "\t";
	//c(x)
	if (x < 2)			 cout << "x= " << x - 4 << "\t";
	else if (x == 2)	cout << "x= " << 8 << "\t";
	else if (x > 2)		cout << "x= " << 2 + x << "\t";

	//zad5//
	cout << "podaj 3 liczby", cin >> a >> b >> c;
	int pom;
	if (a > b) {
		pom = a;
		a = b;
		b = pom;
	}
	if (a > c) {
		pom = a;
		a = c;
		c = pom;
	}
	if (b > c) {
		pom = b;
		b = c;
		c = pom;
	}
	cout << "liczby posortowane: " << a << " " << b << " " << c << endl;

	//zad6//

	bool autobus = true;
	bool deszcz = true;
	if (autobus && deszcz) {
		cout << "Wez parasol. Dostaniesz sie na uczelnie";
	}
	if (deszcz && !autobus) {
		cout << "Nie dostaniesz sie na studia.";
	}
	if (!deszcz && autobus) {
		cout << "Dostaniesz się na uczelnie. Milego dnia i pieknej pogody.";
	}

	//zad7//

	bool premia = true 
	bool znizka = true 
	if (!znizka || premia) {
			cout << "Mozesz kupic samochod! Znizki na samochod nie ma.";
	}
	if (!znizka || !premia) {
		cout << "Zakup samochodu tzreba odlozyc na pozniej... Znizki na samochod nie ma.";
	}
	if (znizka || premia) {
		cout << "Możesz kupic samochod.";
	}

}
