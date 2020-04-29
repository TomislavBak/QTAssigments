#ifndef IMENIK_H
#define IMENIK_H
#include<string>
using namespace std;
class Imenik{
public:
    Imenik(string  = " ",int = 0);
    Imenik(const Imenik &);
    string get_Ime()const;
    void print()const;
    ~Imenik();


private:
    string ime ;
    int tel_broj;
};

#endif // IMENIK_H
