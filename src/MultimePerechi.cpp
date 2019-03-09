#include "MultimePerechi.h"

void MultimePerechi::InsertPereche(Pereche p)
{
    this->lista.push_back(p);
}

const list<Pereche>&MultimePerechi::getList() const
{
    return this->lista;
}

istream &operator>>(istream &input, MultimePerechi &m)
{
    Pereche p;
    input>>p;
    while(p.getFirst() != -1 && p.getLast() != -1)
    {
        m.lista.push_back(p);
        input>>p;
    }
    return input;
}

ostream &operator<<(ostream &output, const MultimePerechi m)
{
    list<Pereche> lista = m.getList();
    for(list<Pereche>::const_iterator it = lista.begin(); it != lista.end(); it++)
    {
        output<<"|"<<*it<<"| ";
    }
    return output;
}


