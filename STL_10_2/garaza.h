#ifndef GARAZA_H
#define GARAZA_H
#include<string>
#include<exception>
#include<iostream>
using namespace std;

class Motor : public exception{
public:
    Motor():exception(){}
   const char * what () const throw ()
            {
                return "Greshen motor";
        }
   ~Motor(){}

};


class Avtomobil : public exception{
public:
    Avtomobil(string):mtr(){}
    void set_ime(string im){ime = im;}
    ~Avtomobil(){}
private:
    string ime;
    Motor mtr;
};




class Garaza : public exception{

public:
    Garaza(string,string);
    ~Garaza(){}
private:
    string avt;

};

Garaza::Garaza(string avtomobil,string motor){
    try { if(avtomobil != motor)
            throw Motor();
        Avtomobil a(avtomobil);}

     catch (Motor &Motor_error) {
        cout << "Nastanal isklucok: " <<

        Motor_error.what() << endl;
 throw;
    }


}

#endif // GARAZA_H
