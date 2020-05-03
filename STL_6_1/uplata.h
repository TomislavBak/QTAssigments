#ifndef UPLATA_H
#define UPLATA_H
#include<string>
#include"datum1.h"
#include<map>

using namespace std;

typedef multimap<int,Datum, less<int>> mmid; // definiranje na multimap kontejner

class Uplata{
public:
    Uplata(string,string,string);
    void print();
    string get_pw()const;
    void nova_Uplata(int,int,int,int);

    ~Uplata();


private:
    string ime;
    string prezime;
    string password;
    mmid uplata; // promenliva vo koja ke gi skladiram datumite i uplatite za istite



};

#endif // UPLATA_H
