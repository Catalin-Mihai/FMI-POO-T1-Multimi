#ifndef PERECHE_H
#define PERECHE_H

#include <iostream>
#include <list>

using namespace std;

class Pereche
{
    friend class MultimePerechi;
    public:
        int getFirst() const ;
        int getLast() const ;
        void setFirst(int val);
        void setLast(int val);
        //Implementare fara friend
        //istream &operator>>(istream &input, Pereche &p);
        //ostream &operator<<(ostream &output, const Pereche &p);

    protected:
        int first;
        int last;
};

istream &operator>>(istream &input, Pereche &p);
ostream &operator<<(ostream &output, const Pereche p);

#endif // PERECHE_H
