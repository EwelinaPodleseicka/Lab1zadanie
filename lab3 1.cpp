#include <iostream>
#include <time.h>
using namespace std;
int main()
{
	////zad1

	//int i = 0, liczba;
	//cout << "Podaj liczbe:", cin >> liczba;

	//cout << "petla while: \n";
	//while (i < liczba)
	//{
	//	cout << i << " ";
	//	i++;
	//}

	//i = 0;
	//cout << "\nPetla do while : \n";
	//do
	//{
	//	cout << i << " ";
	//	i++;
	//} while (i < liczba);

	//cout << "\nPetla for: \n ";
	//for (i = 0; i < liczba; i++)
	//{
	//	cout << i << " ";
	//}


	////zad2 

	//int liczba; 
	//do
	//{
	//	cout << " Podaj liczbe: ", cin >> liczba;

	//} while (liczba >= 0);


	////zad3

	//int liczba, ile_d = 0, ile_u = 0, suma_d = 0, suma_u = 0;
	//for (int i = 0; i < 10; i++) {

	//	cout << "podaj liczbe: ;", cin >> liczba;
	//	if (liczba >= 0) {
	//		ile_d++;
	//		suma_d == liczba;
	//	}
	//	else {
	//		ile_u += liczba;

	//	}
	//}// koniec petli 

	//cout << "Suma licz dodstanich " << suma_d << "ilosc liczb dodatnich: " << ile_d << endl;
	//cout << "Suma liczb ujemnych " << suma_u << "ilosc licz ujemnych: " << ile_u << endl;

	////zad4

	//int n, liczba, suma = 0;

	//cout << "podaj n: ", cin >> n;
	//if (n > 0) {
	//	for (int i = 0; i < n; i++) {
	//		cout << "podaj liczbe: ; ", cin >> liczba;
	//		if (liczba % 2 == 0) suma += liczba;
	//	}
	//	cout << "suma liczb przszytsych: ; " << suma << endl;
	//}
	//else cout << "n nie moze byc <\n";


	// zad5

		int liczba;
	srand(time(NULL));
	int ilosc = 0; 
	cout << "podaj ilosc liczb: "; cin >> ilosc; 
	for (int i = 0; i < ilosc; i++) {
		/*liczba = rand() % 11 - 5; 
		cout << liczba << " ";*/

		rand() % 11 - 5; //-5,5 
		rand() % 9 + 1; // 1,10 
		rand() % 11;   //0,10 
		liczba = rand() % ((45 + 1) - (-10)); 
		cout << liczba << " ";

	}





	return 0;
}
