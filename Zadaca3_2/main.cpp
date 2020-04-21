
#include <iostream>
#include<cstring>
#include <vector>

using namespace std;


class Stedac
{

 public:
        void vnesi_podatoci();
        void prikazi_podatoci();
        void uplata(unsigned long i);
        void isplata(unsigned long i);
        long sostojba();
        int telefonski_broj(){return broj;}
        int get_pin();

 private:
        int broj,pin;
        char * imeprezime, *adresa;
        long saldo=0;



};

void Stedac::vnesi_podatoci(){
    char Ime[60],Adresa[30];
    cout<<"Vnesete go vasheto ime i prezime :"<<endl;
    cin>>Ime;
    imeprezime = new char[strlen(Ime) + 1];
    strcpy(imeprezime,Ime);

    cout<<"Vnesete go vashiot telefonski broj :"<<endl;
    cin>>broj;


    cout<<"Vnesete ja vashata adresa :"<<endl;
    cin>>Adresa;
    adresa = new char[strlen(Adresa) +1];
    strcpy(adresa,Adresa);

    cout<<"Vnesete go vashiot pin :"<<endl;
    cin>>pin;



}

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

int Stedac::get_pin(){
    return pin;
}








int main()
{
    vector<Stedac>stedaci;
    bool kraj = true;
    int pin;
    char choice1;
    long sredstva_uplata,sredstva_isplata;




while(kraj){



      cout<<"a) Vnesuvanje na nov stedac vo sistemot\n"<<"b) Prikaz na podatocite\n"
       <<"c) Uplata na sredstva\n"<<"d) Isplata na sredstva \n"
       <<"e) Prikaz na saldoto\n"<<"f) Kraj"<<endl;
      cin>>choice1;
      switch(choice1){

      case 'a':{
         Stedac nov;
          nov.vnesi_podatoci();
          stedaci.push_back(nov);
      }
          break;

      case 'b':{
          cout<<"Vnesete go vashiot pin: ";
          cin>>pin;


           for(int i =0;i<(int)stedaci.size();i++){
            if(stedaci[i].get_pin() == pin){
                stedaci[i].prikazi_podatoci();
            }
           }}



           break;

      case 'c':{
          cout<<"Vnesete gi sredstvata: ";
          cin>>sredstva_uplata;

          cout<<"Vnesete go vashiot pin: ";
          cin>>pin;


           for(int i =0;i<(int)stedaci.size();i++){
            if(stedaci[i].get_pin() == pin){
                stedaci[i].uplata(sredstva_uplata);
            }
           }}
      break;

      case 'd':{
           cout<<"Vnesete gi sredstvata: ";
           cin>>sredstva_isplata;
           cout<<"Vnesete go vashiot pin: ";
           cin>>pin;


            for(int i =0;i<(int)stedaci.size();i++){
             if(stedaci[i].get_pin() == pin){
                 if(stedaci[i].sostojba()<sredstva_isplata){
                     cout<<"Nemate dovolno sredstva"<<endl;
             }
                 else stedaci[i].isplata(sredstva_isplata);
            }}}

      break;

      case 'e':{
          cout<<"Vnesete go vashiot pin: ";
          cin>>pin;
          for(int i =0;i<(int)stedaci.size();i++){
           if(stedaci[i].get_pin() == pin){
              cout<<stedaci[i].sostojba()<<endl;
           }
          }}
      break;


      case'f': kraj = false;
          break;
      }

    }






    return 0;
}
