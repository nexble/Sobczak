#include <iostream>

using namespace std;

int main() {
    //Napisz program informujący czy liczba podana przez użytkownika jest parzysta czy nieparzysta.

    int a;

    cout << "podaj liczbe: ";
    cin >> a;

    cout << "------------- ZADANIE 1 --------------" << endl;

    for (int i = 0; a%2 ; i++) {
        if (a%2 == 0) {
            cout << "liczba jest parzysta." << endl;
            // nie wyswietla output.
        }
        else {
            cout << "liczba nie jest parzysta" << endl << "wpisz liczbe parzysta: ";
            cin >> a;
        }
    }

    //Napisz program informujący czy liczba podana przez użytkownika jest większa, mniejsza czy równa zero. Wykorzystaj tylko dwie instrukcje warunkowe.

    cout << "------------- ZADANIE 2 --------------" << endl;

    if (a == 0)
        cout << "liczba jest rowna 0." << endl;
    if (a > 0)
        cout << "liczba jest wieksza od 0." << endl;

     if (a < 0)
        cout << "liczba jest mniejsza od 0." << endl;

    //Napisz program sprawdzający czy liczba podana przez użytkownika jest z przedziału <1,10> lub <17,21>

    cout << "------------- ZADANIE 3 --------------" << endl;

    if (a>=1 && a<=10 or a>=17 && a<=21)
        cout << "liczba nalezy do przedzialu." << endl;
    else
        cout << "liczba nie nalezy do przedzialu." << endl;

    return 0;
}
