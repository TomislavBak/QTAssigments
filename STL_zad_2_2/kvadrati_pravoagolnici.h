#ifndef KVADRATI_PRAVOAGOLNICI_H
#define KVADRATI_PRAVOAGOLNICI_H
#include<iomanip>
#include<iostream>
using namespace std;

class Kvadrat{

public:
    Kvadrat(int s = 0){
        strana = s;
    }

    int Presmetaj_Ploshtina()const{
        return strana*strana;
    }
    friend ostream &operator <<(ostream &output, const Kvadrat &kvadr){
        output <<"Kvadrat "<<"a  = "<<kvadr.strana<<endl;

        return output;
    }

    void set_Strana(int str){
        strana = str;
    }
    ~Kvadrat(){

    }

private:
    int strana;
};


class Pravoagolnik{

public:
    Pravoagolnik(int a = 0,int b = 0){
        sirina = a;
        dolzina = b;
    }
    void set_Strana(int a, int b){
        sirina = a;
        dolzina = b;

    }

    friend ostream &operator <<(ostream &output, const Pravoagolnik &prav){
        output <<"Pravoagolnik "<<"a  = "<<prav.sirina<<"b = "<<prav.dolzina<<endl;

        return output;
    }

    int Presmetaj_Plostina()const{
        return sirina*dolzina;
    }

    ~Pravoagolnik(){

    }

private:
    int sirina;
    int dolzina;
};



#endif // KVADRATI_PRAVOAGOLNICI_H
