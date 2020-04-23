#include <iostream>
#include"lice.h"
#include<cstring>
#include<vector>
using namespace std;
/*
template <class T>
 void pecati_Pole(vector<T> point){
int n = point.size();
    for(int i = 0;i<n;i++){
        cout<<point[i]<<endl;
    }
}

*/

template <class T>
 void pecati_Pole(T* point,int n){

    for(int i = 0;i<n;i++){
        cout<<point[i]<<endl;
    }
}

int main()
{

    //vector<Lice<int>>Vraboteni;
    //vector<Lice<char*>>Klienti;
    int p = 0;
    int k = 0;
    Lice<int>*Vraboteni;
    Vraboteni = new Lice<int>[100]();
    Lice<char*>*Klienti;
    Klienti = new Lice<char*>[100]();
    bool kraj = true;
    char choice1;
    int kod_vraboteni,godini;
    long int maticen;
    char Ime_Prezime[60],*ime,Adresa[20],*adr,kod_klienti[10],*kod;
while(kraj){
    cout<<"1. Vnesuvanje na podatoci za vraboten \n"<<"2. Vnesuvanje na podatociza klient \n"
       <<"3. Pecatenje na lista od vraboteni \n"<<"4. Pecatenje na lista od klienti \n"<<"5. Kraj"<<endl;
    cin>>choice1;

    switch (choice1) {

    case '1':{

        cout<<"Vnesi ime i prezime"<<endl;
        cin>>Ime_Prezime;
        ime = new char[strlen(Ime_Prezime) + 1];
        strcpy(ime,Ime_Prezime);

        cout<<"Vnesi adresa"<<endl;
        cin>>Adresa;
        adr = new char[strlen(Adresa) + 1];
        strcpy(adr,Adresa);

        cout<<"Vnesi maticen broj"<<endl;
        cin>>maticen;

        cout<<"Vnesi broj na godini"<<endl;
        cin>>godini;

        cout<<"Vnesi kod"<<endl;
        cin>>kod_vraboteni;

       // Lice<int> vraboten(ime,adr,godini,maticen,kod_vraboteni);
        Vraboteni[p].set_Lice(ime,adr,godini,maticen,kod_vraboteni);
        delete [] ime;
        delete [] adr;
        p++;



    } // kraj na vnesvanje za vraboten
        break;

case '2':{
        cout<<"Vnesi ime i prezime"<<endl;
        cin>>Ime_Prezime;
        ime = new char[strlen(Ime_Prezime) + 1];
        strcpy(ime,Ime_Prezime);


        cout<<"Vnesi adresa"<<endl;
        cin>>Adresa;
        adr = new char[strlen(Adresa) + 1];
        strcpy(adr,Adresa);

        cout<<"Vnesi maticen broj"<<endl;
        cin>>maticen;

        cout<<"Vnesi broj na godini"<<endl;
        cin>>godini;

        cout<<"Vnesi kod"<<endl;
        cin>>kod_klienti;
        kod = new char[strlen(kod_klienti) + 1];
        strcpy(kod,kod_klienti);

       // Lice<char*>klient(Ime_Prezime,Adresa,godini,maticen,kod_klienti);
        Klienti[k].set_Lice(Ime_Prezime,Adresa,godini,maticen,kod_klienti);
        delete [] ime;
        delete [] adr;
        delete [] kod;

        k++;

    } // kraj na vnesuvanje na klient
        break;
case'3':{
pecati_Pole(Vraboteni,p);

    }
break;

case '4':{
        pecati_Pole(Klienti,k);
    }
        break;

case '5': kraj = false;
       break;

    }




} // kraj na while

    return 0;
}
