#include "Multime.h"

Multime Multime::operator*(const Multime &m)
{
    Multime c;
    list<int>::const_iterator it_m;
    list<int>::iterator it_c, it_this;
    for(it_m = m.lista.begin(); it_m != m.lista.end(); it_m++)
    {
        for(it_this = this->lista.begin(); it_this != this->lista.end(); it_this++)
        {
            if((*it_m) == (*it_this))
            {
                c.lista.push_back((*it_m));
            }
        }
    }
    return c;
}

Multime Multime::operator+(const Multime &m)
{
    Multime c;
    list<int>::const_iterator it;
    list<int>::iterator it_this;
    for(it = m.lista.begin(); it != m.lista.end(); it++)
    {
        c.lista.push_back((*it));
    }
    for(it_this = this->lista.begin(); it_this != this->lista.end(); it_this++)
    {
        c.lista.push_back((*it_this));
    }
    c.removeDuplicates();
    return c;
}

Multime Multime::operator-(const Multime &m)
{
    Multime c;
    list<int>::const_iterator it;
    list<int>::iterator it_this;
    bool found = false;
    for(it_this = this->lista.begin(); it_this != this->lista.end(); it_this++)
    {
        for(it = m.lista.begin(); it != m.lista.end(); it++)
        {
            if((*it) == (*it_this)) found = true;
        }
        if(found == false) c.lista.push_back((*it_this));
    }
    return c;
}

void Multime::removeDuplicates()
{
    //Elimina duplicatele sortand lista
    //Nu ar trebui sa conteze ordinea elementelor intr-o multime
    lista.sort();
    lista.unique();
}

istream &operator>>(istream &input, Multime &m)
{
    int x;
    input>>x;
    while(x!=-1)
    {
        m.lista.push_back(x);
        input>>x;
    }
    m.removeDuplicates();
    return input;
}

ostream &operator<<(ostream &output, const Multime m)
{
    for(list<int>::const_iterator it = m.lista.begin(); it != m.lista.end(); it++)
    {
        output<<(*it)<<" ";
    }
    return output;
}

list<int> & Multime::getList()
{
    return this->lista;
}
