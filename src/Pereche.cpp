#include "Pereche.h"

void Pereche::setFirst(int val)
{
    this->first = val;
}

void Pereche::setLast(int val)
{
    this->last= val;
}

int Pereche::getFirst() const
{
    return this->first;
}


int Pereche::getLast() const
{
    return this->last;
}

istream &operator>>(istream &input, Pereche &p)
{
    int f, l;
    input>>f>>l;
    p.setFirst(f);
    p.setLast(l);
    return input;
}

ostream &operator<<(ostream &output, const Pereche p)
{
    output<<p.getFirst()<<" "<<p.getLast();
    return output;
}

