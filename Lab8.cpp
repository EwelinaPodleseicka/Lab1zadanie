
using namespace std;
#include <iostream>

int main()
{
	// zad1

	//int a, b, c, * ptr, * ptr1, * ptr2;
	//ptr = &a;
	//ptr1 = &b;
	//ptr2 = &c;


	//cout << "podaj a:", cin >> a;
	//cout << "podaj b:", cin >> b;

	//cout << "adres zmiennej a:" << ptr << endl;
	//cout << "wartosc zimiennej a:" << *ptr << endl;

	//cout << "adres zmiennej b:" << ptr << endl;
	//cout << "wartosc zimiennej b:" << *ptr << endl;

	//cout << "adres zmiennej c:" << ptr << endl;
	//cout << "wartosc zimiennej c:" << *ptr << endl;

	//cout << "różnica a - b: " << (*ptr) - (*ptr) << endl;
	//cout << "srednia z podanyh liczb: " << (double)(((*ptr) + (*ptr1) + (*ptr2)) / 3 ) << endl;



	//zad2

	//int z2[10], * prt, i;
	//prt = &z2[0]; cout << "pierwszy element tablicy:  " << prt << endl;
	//prt = &z2[3]; cout << "czwarty element tablicy:" << prt << endl;
	//prt = &z2[0];
	//for (int i = 0; i < 10; i++);
	//{
	//	z2[i] = rand() % 10 + 5;
	//	prt = &z2[i];
	//	cout << i << "elementy:" << z2[i] << prt << "\t";
	//	cout << "\n\n";
	//}
	


	//zad3
	//int* ile = new int;
	//float* srednia = new float;
	//*srednia = 0;
	//cout << "Ile chcesz podac zmiennych?"; cin >> *ile;
	//float* tab = new float[*ile];
	//cout << "Podaj zmienne: ";

	//for (int i = 0; i < *ile; i++)

	//{
	//	cin >> tab[i]
	//		*srednia += tab[i];
	//}
 //   
	//*srednia /= *ile;
 //    cout << "Srednia wynosi: " << *srednia << " a liczby wieksze od sredniej to: ";

	//for (int i = 0; i < *ile; i++)

	//{
	//	if (tab[i] > *srednia)
	//	cout << tab[i] << " ";
	//}

	//delete[] tab;

	//delete ile;

	//delete srednia;





	//zad4

	//int kwadrat(int* liczba)

	//	int main()
	//{
	//	{
	//		return (*liczba) (*liczba);
	//	}
	//}
	// zad5

	//void potega(int* liczba, int* wykladnik, int* odpowiedz)
	//	int main()
	//{
	//	
	//		*odpowiedz = 1;
	//		for (int i = 1; i <= *wykladnik; i++) {
	//			*odpowiedz = *odpowiedz * *liczba;
	//		}
	//	
	//}
	////zad6

	//void wypisz_n_razy(char* znak, int* n) 
	//	int main()
	//{
	//	
	//		for (int i = 0; i < *n; i++) {
	//			std::cout << znak;
	//		}
	//		*n = *n - 1;
	//	

	//}

	//-----------------------------------------------------------------------------------------------------------------------------------------//

	/*int  kwadrat(int* liczba) {
		powrót* liczba** liczba;
	}

	void  potega(wew* liczba, wew* wykladnik, wew* odpowiedz) {
		*odpowiedz = 1;
		for (int i = 1; i <= *wykladnik; i++) {
			*odpowiedz = *odpowiedz * *liczba;
		}
	}

	void  wypisz_n_razy(char* znak, int* n) {
		dla(int i = 0; i < *n; i++) {
			cout << znak;
		}
		*n = *n - 1;
	}

	int  główna() {
		int a = 7;
		cout << " Kwadrat: " << kwadrat(&a) << endl;

		int liczba = 5;
		int wykladnik = 3;
		int odpowiedz = 0;
		potega(&liczba, &wykladnik, &odpowiedz);
		cout << " Potega: " << odpowiedz << endl;

		intn = 7;
		znak c = ' x ';
		wypisz_n_razy(&c, &n);
		cout << endl << " Pomniejszone n: " << n << endl;
		zwróć  0;
	}*/
} // ====== koniec main ======


//zad7

  int foo(int* wsk1, int* wsk2)
  {
	if (*wsk1 < *wsk2)
		return *wsk1;
	else
		return *wsk2;
  }
  int main()
  {
	int a, b;
	cin >> a >> b;
	cout << foo(&a, &b);
	return 0;
  }
