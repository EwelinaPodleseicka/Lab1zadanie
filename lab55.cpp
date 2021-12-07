using namespace std;
#include <iostream>

int main()
{
	//int tab[5]; // nu;'\0'
	//char tab[] = "witaj";
	//char tab1[] = { 'f','f'.'d', \'0' };
	//char tab2[4] = {}


	//char znaki[100];
	//cout << "podaj imie i nazwisko";
	////cin >> znaki;
	//cin.getline(znaki, 100);
	//cout << znaki;

	//cin.get();
	//cout << "ponownie podaj imie i nazwisko: ";
	//cin.get(znaki, 100);
	//cout << znaki;s_
	////strcpy_s(a, b);// kopiuje z tab a do b
	////strcat_s(a, b);
	////strlen(tab); //zwraca ilość elementów tablicy (jak jest "jan" to 3 
	////strcmp(a, b); //zwraca 0 jeśli łąńcuchy są identyczne, 1 jak są różne 
	////sizof (tab)/sizeof(tab[0]);
	////string imie;
	//

	////zad2
	//int liczby[100];
	//char znaki[100];
	//cout << "podaj liczby: ";
	////cin >> liczby a;
	////cin >> liczby[0];
	//cin >> liczby;
	//cin >> znaki; // zapis nieprawidłowy dla tablicy int , musi być wskazany element 

	//zad3
	char tab[] = "wiosna";
	cout << "rozmiar tablicy" << size(tab);

	//zad4
	char s1[100], s2[100];
	cout << tab << "  " << strlen(tab) << endl;
	cin.getline(s1, 100);
	cin.getline(s2, 100);
	cout << s2 << "\t" << strlen(tab) << endl;
	cout << s1 << "\t" << strlen(tab) << endl;
	strcpy_s(s1, s2);
	cout << s1 << "\t" << strlen(s1) << endl;




	// zad6 
	char tekst[100];
	int a = 0, c = 0;
	cout << "Wpisz tekst: ", cin.getline(tekst, 100);

	//	char tekst[] = { "ameryka"};


	//	int ttt[] = { 1,2,3,1,5,6,7,11 };
	for (char b : tekst) {
		if (b == 'a' || b == 'o' || b == 'e' || b == 'i' || b == 'u' || b == 'y') { a++; }
		else if (b == 'q' || b == 'w' || b == 'r' || b == 't' || b == 'p' || b == 's' || b == 'd' || b == 'f' || b == 'g' || b == 'h' || b == 'j' || b == 'k' || b == 'l' || b == 'z' || b == 'x' || b == 'c' || b == 'v' || b == 'b' || b == 'n' || b == 'm')
		{
			c++;
		}
	}
	cout << "Samoglosek \t" << a << endl;
	cout << "Spolglosek \t" << c;
}
