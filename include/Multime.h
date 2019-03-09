#ifndef MULTIME_H
#define MULTIME_H

#include <list>
#include <iostream>

using namespace std;



class Multime
{
    public:
        void removeDuplicates();
        list<int> &getList();

        //Implementare cu friend
        friend istream &operator>>(istream &input, Multime &m);
        friend ostream &operator<<(ostream &output, const Multime m);

        Multime operator*(const Multime &m);
        Multime operator+(const Multime &m);
        Multime operator-(const Multime &m);

    private :
        list<int> lista;
};

#endif // MULTIME_H
