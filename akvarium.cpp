#include <string>

using namespace std;

struct Hal {
    int meret;

    Hal(): meret(0) {}

    explicit Hal(int meret): meret(meret) {}
};

class Akvarium {
    double szelesseg;
    double melyseg;
    double magassag;

    Hal halak[10];

public:
    Akvarium(double szelesseg, double melyseg, double magassag): szelesseg(szelesseg), melyseg(melyseg), magassag(magassag) {}

    operator double() const  {
        return szelesseg * melyseg * magassag;
    }
};
