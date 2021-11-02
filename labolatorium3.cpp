#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	//zad2
	srand(time(NULL));
	int i{ 1 }, suma_d{ 0 }, n;
	cout << "Podaj liczbe studentow: "; cin >> n;
	while (n < 1 || n > 100) {
		cout << "Podaj wlasciwa liczbe studentow: ";
		cin >> n;
	}

	//zad1
	while (i <= n) {
		cout << "Podaj ilosc punktow dla studenta: "; cout << i; 
		int punkt;
		cin >> punkt;
		while (punkt < 1 || punkt > 100) {
			cout << "Podaj wlasciwa liczbe punktow: ";
			cin >> n;
		}

		suma_d += punkt;
		i++;
	}
	cout << "srednia = "; cout << (float)suma_d / n; 


	//zad3
	/*while (true) {
		cout << "Podaj ilosc punktow dla studenta: "; cout << i;
		int punkt;
		cin >> punkt;
		if (punkt < 1 || punkt > 100) {
			continue;
			cout << "Podaj wlasciwa liczbe punktow: ";

		}

		suma_d += punkt;
		i++;
	}
	cout << "srednia = "; cout << (float)suma_d / n;*/


	//zad4 
	/*do{
		cout << "Podaj ilosc punktow dla studenta: "; cout << i;
		int punkt;
		cin >> punkt;
		if (punkt < 1 || punkt > 100) {
			continue;
			cout << "Podaj wlasciwa liczbe punktow: ";

		}

		suma_d += punkt;
		i++;

	} while (true);

	cout << "srednia = "; cout << (float)suma_d / n;*/

	//zad5

	int i;
	/*for (i = 1; i <= 100; i++)
	{
		cout << i; cout << "  ";
	}*/
	  
	
	/*for (i = 100; i >= 0; i--)
	{
		cout << i; cout << "  ";
	}*/

	
	/*for (i = 7; i <= 77; i+=7) 
	{
		cout << i; cout <<  "  ";
	}*/

	
	for (i = 20; i >= 0; i-=2)
	{
		cout << i; cout << "  "; 
	}
}





