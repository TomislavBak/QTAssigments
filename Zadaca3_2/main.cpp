#include <iostream>
#include<stdio.h>
#include <vector>
#include <string>
using namespace std;
// Programata ja pishuvav na ist nachin kako i Zadacha3_1 no ima nekoj problem mi kazuva deka ima segmentation fault
//ne mozev da go orkrijam kade e problemot pa ako bi go posocile bi bilo super.

class Stedac
{
    int broj;
    string imeprezime, adresa;
    long saldo;
 public:
        void vnesi_podatoci();
        void prikazi_podatoci();
        void uplata(unsigned long i);
        void isplata(unsigned long i);
        long sostojba();
        int telefonski_broj(){return broj;}


};

void Stedac::vnesi_podatoci(){
    cout<<"Vnesete go vasheto ime i prezime :"<<endl;
    cin>>imeprezime;
    cout<<"Vnesete go vashiot telefonski broj :"<<endl;
    cin>>broj;
    cout<<"Vnesete ja vashata adresa :"<<endl;
    cin>>adresa;


}
string ime;
void Stedac::prikazi_podatoci(){

    cout<<imeprezime<<endl;
    cout<<adresa<<endl;
    cout<<broj<<endl;

}

long Stedac::sostojba(){
    return saldo;
}

void Stedac::uplata(unsigned long i){

    saldo =saldo + i;
}

void Stedac::isplata(unsigned long i){

    saldo =saldo - i;
}




int broj_stedac = 0;
void Nov_Stedac(){

    broj_stedac++;
}







int main()
{
    vector<Stedac>stedaci;

    Stedac nov;
    char choice1,choice2;
    long sredstva_uplata,sredstva_isplata;
    int sted_broj;




        cout<<"Dali sakate da go otvorite menito: [y/n]"<<endl;
        cin>>choice1;
    label:
    if(choice1=='y'){
      cout<<"a) Vnesuvanje na nov stedac vo sistemot\n"<<"b) Prikaz na podatocite\n"
       <<"c) Uplata na sredstva\n"<<"d) Isplata na sredstva \n"
       <<"e) Prikaz na saldoto"<<endl;
      cin>>choice2;
      switch(choice2){

      case 'a':
          Nov_Stedac();
          nov.vnesi_podatoci();
          cout<<"Vashiot broj e "<<broj_stedac<<endl;

          break;

      case 'b':
          cout<<"Vnesete go vashiot broj na stedac: ";
          cin>>sted_broj;

          stedaci[sted_broj].prikazi_podatoci();


           break;

      case 'c':
          cout<<"Vnesete gi sredstvata: ";
          cin>>sredstva_uplata;
          cout<<"Vnesete go vashiot broj na stedac: ";
          cin>>sted_broj;
          stedaci[sted_broj].uplata(sredstva_uplata);
      break;

      case 'd':
           cout<<"Vnesete gi sredstvata: ";
           cin>>sredstva_isplata;
           cout<<"Vnesete go vashiot broj na stedac: ";
           cin>>sted_broj;
           if(stedaci[sted_broj].sostojba()<sredstva_isplata){
               cout<<"Nemate dovolno sredstva";
           }
           else {stedaci[sted_broj].isplata(sredstva_isplata);}

      break;

      case 'e':
          cout<<"Vnesete go vashiot broj na stedac: ";
          cin>>sted_broj;
         cout<<"Vashata sostojba e: "<< stedaci[sted_broj].sostojba()<<endl;
      break;
      }

    }
    else return 0;


    cout<<"Dali sakate da go otvorite menito: [y/n]"<<endl;
    cin>>choice1;
    if(choice1=='y'){
       goto label;
    }


    return 0;
}
