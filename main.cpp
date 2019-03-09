#include <iostream>
#include <list>
#include <Multime.h>
#include <MultimePerechi.h>
#include <Pereche.h>
#include <fstream>

using namespace std;

MultimePerechi ProdCart(Multime m1, Multime m2)
{
    m1.removeDuplicates();
    m2.removeDuplicates();
    list<int>::iterator it1;
    list<int>::iterator it2;
    list<int> m1_list = m1.getList();
    list<int> m2_list = m2.getList();
    Pereche p;
    MultimePerechi mp;
    //cin>>p;
    for(it1 = m1_list.begin(); it1 != m1_list.end(); it1++)
    {
        for(it2 = m2_list.begin(); it2 != m2_list.end(); it2++)
        {
            p.setFirst((*it1));
            p.setLast((*it2));
            mp.InsertPereche(p);
        }
    }
    return mp;
}

int main()
{
    ifstream f("input.txt");
    ofstream g("output.txt");

    /*
    Multime m1, m2, m3;
    cout<<"Introduceti elementele primei multimi: "<<endl;
    cin>>m1;
    cout<<"Introduceti elementele celei de a doua multimi: "<<endl;
    cin>>m2;
    m3 = m1 * m2;
    cout<<"Multimea intersectiei celor doua multimi este: "<<m3<<endl;
    m3 = m1 + m2;
    cout<<"Multimea reuniunii celor doua multimi este: "<<m3<<endl;
    m3 = m1 - m2;
    cout<<"Multimea rezultata din diferenta celor doua multimi este: "<<m3<<endl;
    */


    /*Pereche p1, p2;
    cin>>p1;
    cout<<"Prima pereche: "<<p1.getFirst()<<" "<<p1.getLast()<<endl;*/


    Multime m1, m2;
    MultimePerechi mp;
    f>>m1>>m2;
    mp = ProdCart(m1, m2);
    g<<mp;
    return 0;
}
