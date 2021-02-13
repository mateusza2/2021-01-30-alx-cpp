#include <iostream>

/*
    uruchomienie z danymi z pliku:

    ./a.out < z01-test.txt
*/

int main()
{
    const int ILE = 10;
    int liczby[ILE];

    int suma = 0;
    int maks, mini;
    double srednia;

    for(int i = 0; i < ILE; i += 1){
        std::cin >> liczby[i];
    }

    maks = liczby[0];
    mini = liczby[0];

    for(int i=0; i < ILE; i += 1){
        suma += liczby[i];
        if (liczby[i] > maks){
            maks = liczby[i];
        }
        if (liczby[i] < mini){
            mini = liczby[i];
        }
    }

    srednia = 1.0 * suma / ILE;

    std::cout << "Suma: " << suma << "\n";
    std::cout << "Średnia: " << srednia << "\n";
    std::cout << "Maksimum: " << maks << "\n";
    std::cout << "Minimum: " << mini << "\n";

    return 0;
}