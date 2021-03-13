#include <iostream>
#include <vector> //uporzadkowany, szybki dostep do dowolnego elementu, wstawianie szybkie tylko na koniec
#include <list> // uporządkowany, szybkie wstawianie w dowolnym miejscu, dostęp do elementu w czasie liniowym
#include <deque> //uporzadkowany, szybki dostep do dowolnego elementu, wstawianie szybkie tylko na koniec i początek
#include <set> // uporządkowany rosnąco, dodanie/usuniecie/znalezienie elementu w O(logn), elementy muszą być porównywalne za pomocą operator<
#include <unordered_set> // nieuporządkowany, dodanie/usuniecie/znalezienie elementu w O(1), elementy muszą być haszowalne (hash()) i mieć operator==
//mulriset i unordered_multiset przechowują każdą kopię a nie tylko unikalne

int main() {
    std::multiset<int> s;
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(7);
    s.insert(3);
    std::cout << s.size() << '\n';
    for (int x : s) {
        std::cout << x << ' ';
    }
    std::cout << '\n';

    auto it = s.find(35); //iterator na element jeśli jest w zbiorze, end() w przeciwnym przypadku
    if (it == s.end())
        std::cout << "elementu nie znaleziono\n";

    return 0;
}