#ifndef FIGURA_H
#define FIGURA_H
#include <iostream>
using namespace std;

class Figura{
    private:
        string figura;
    public:
        Figura(string figura)
        {
            this->figura = figura;
        }
        string getFigura() const {return figura;}
};

#endif