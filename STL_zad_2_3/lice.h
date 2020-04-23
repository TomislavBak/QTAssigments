#ifndef LICE_H
#define LICE_H
#include<cstring>
#include<iomanip>
#include<iostream>
using namespace std;

template <class T>
class Lice{
public:
    Lice();
    Lice(const Lice&);
    friend ostream &operator <<(ostream &output,Lice &init){
        output<<"Ime i prezime: "<<init.imeiprezime<<"\n"<<"Adresa: "<<init.adresa<<"\n"<<"Vozrast: "<<init.vozrast<<"\n"
             <<"Maticen broj: "<<init.mat_br<<endl;

     return output;
    }
    void set_Lice(char * = 0,char * = 0,int = 0,long int = 0,T = 0);


    ~Lice();

private:
    char *imeiprezime;
    long int mat_br;
    int vozrast;
    char *adresa;
    T kod;
};

template <class T>

Lice<T>::Lice(){


}

template <class T>
void Lice<T>::set_Lice(char *ImePrez,char *Adr,int Vozrast,long int maticen,T Kod){
    imeiprezime = new char [strlen(ImePrez) + 1];
    strcpy(imeiprezime,ImePrez);

    adresa= new char[strlen(Adr) + 1];
    strcpy(adresa,Adr);

    vozrast = Vozrast;

    mat_br = maticen;

    kod = Kod;
}

template <class T>
Lice<T>::Lice(const Lice &init){
    strcpy(imeiprezime,init.imeiprezime);
    strcpy(adresa,init.adresa);
    vozrast = init.vozrast;
    mat_br = init.mat_br;
    kod = init.kod;
}


template <class T>
Lice<T>::~Lice(){
    delete [] imeiprezime;
    delete [] adresa;

}






#endif // LICE_H
