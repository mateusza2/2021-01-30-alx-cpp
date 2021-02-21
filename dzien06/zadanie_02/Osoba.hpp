#include <string>

#ifndef __OSOBA_HPP__
#define __OSOBA_HPP__

class Osoba {
    public:
        Osoba(std::string, double, double);
        static double policzBMI(double, double);
        double bmi() const;
    private:
        std::string imie;
        std::string nazwisko;
        double waga;    // w kg
        double wzrost;  // w metrach
};

#endif