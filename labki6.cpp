#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    ////zad1
    //int r, polek, objetosck;
    //string wybor;
    //cin >> wybor;
    //cout << " Podaj dlugosc promienia : "; cin >> r;
    //cout << "Dlugosc promienia wynosi:" << r << endl;
    //cout << "Co chcesz obliczyc? Napisz objetosck lub polek:";
    //if (cin >> objetosck)
    //{
    //    objetosck = 2 * 3.14 * r;
    //    cout << "Ojetosc wynosi:" << objetosck;
    //}
    //else if (cin >> polek)
    //{
    //    polek =  3.14 *( r * r);
    //    cout << "Pole wynosi:" << polek;
    //}h

    //zad3
    int liczba;
    cin >> liczba;

    string wynik;

    while (liczba) {
        wynik = (liczba % 2 ? "1" : "0") + wynik;
        liczba /= 2;
    }
    cout << wynik;

    //zad2
    int dwusilnia(int n) {
        if (n == 0) return 1;
        if (n == 2) return 2;
        if (n == 1) return 1;
        return n * dwusilnia(n - 2);
    }

    bool LiczbaPierwsza(int Liczba) {
        if (Liczba == 1) return false;
        if (Liczba == 2) return true;
        if (Liczba % 2 == 0) return false;
        for (int i = 3; i * i <= Liczba; i += 2) {
            if (Liczba % i == 0) return false;
        }
        return true;
    }

    {
        cout << dwusilnia(4) << endl;
        cout << LiczbaPierwsza(21) << endl;
        return 0;
    }

    //zad4























    return 0;



















}