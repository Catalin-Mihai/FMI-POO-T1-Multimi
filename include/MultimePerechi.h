#ifndef MULTIMEPERECHI_H
#define MULTIMEPERECHI_H

#include <iostream>
#include <list>
#include <Pereche.h>

using namespace std;

class MultimePerechi
{
    public:
        //Implementare ca friend
        friend istream &operator>>(istream &input, MultimePerechi &m);
        friend ostream &operator<<(ostream &output, const MultimePerechi m);
        const list<Pereche> &getList() const;
        void InsertPereche(Pereche p);

    private:
        list<Pereche> lista;
};

#endif // MULTIMEPERECHI_H
