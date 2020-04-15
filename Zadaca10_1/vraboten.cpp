#include<iostream>
#include<cstring>
#include<cassert>
#include"vraboten.h"
using namespace std;

Vraboten::Vraboten(char *Ime, char *Prezime, int Godina){

    postavi_Vraboten(Ime,Prezime,Godina);
     cout<<"Postavuvanje podatoci za:"<<ime<<" "<<prezime<<endl;
}

void Vraboten::postavi_Vraboten(char *Ime, char *Prezime, int Godina){

ime = new char[strlen(Ime) + 1]; // postavuvanje na prezime
    assert(prezime !=0);
strcpy(ime,Ime);


prezime = new char[strlen(Prezime) + 1]; // postavuvanje na prezime
assert(prezime !=0);
strcpy(prezime,Prezime);

godina = Godina; // postavuvanje na godina

}

void Vraboten::prikazi_Podatoci() const{
    cout<<"Ime i prezime na vraboten: "<<ime<<" "<<prezime<<endl;
    cout<<"Godina na vrabotuvanje: "<<godina<<endl;
}

Vraboten::Vraboten(Vraboten const&init):ime(init.ime),prezime(init.prezime),godina(init.godina){
    postavi_Vraboten(ime,prezime,godina);
     cout<<"Postavuvanje copy konstruktor"<<endl;

}
Vraboten::~Vraboten(){
    delete [] ime;
    delete [] prezime;
}



/* -------------------------------------------------------------------------------------------------------------------------- */

Profesor::Profesor(char *Ime,char*Prezime,int Godina,char*Zvanje,char*Oblast,int Predmeti):Vraboten(Ime,Prezime,Godina){

    postavi_Profesor(Zvanje,Oblast,Predmeti);

}

void Profesor::postavi_Profesor( char *Zvanje, char *Oblast, int Predmeti){

    zvanje_profesor = new char[strlen(Zvanje) + 1]; // postavuvanje na zvanje
    assert(zvanje_profesor !=0);
    strcpy(zvanje_profesor,Zvanje);

    oblast = new char[strlen(Oblast) + 1]; // postavuvanje na oblast
    assert(oblast !=0);
    strcpy(oblast,Oblast);

    br_predmeti = Predmeti; // postavuvanje na broj na predmeti
}

void Profesor::prikazi_Profesor() const{
    prikazi_Podatoci();

    cout<<"Zvanje: "<<zvanje_profesor<<endl;
    cout<<"Oblast: "<<oblast<<endl;
    cout<<"Broj na predmeti: "<<br_predmeti<<endl;
}
Profesor::Profesor(Profesor const&init):Vraboten(init.ime,init.prezime,init.godina){
     postavi_Profesor(init.zvanje_profesor,init.oblast,init.br_predmeti);
}

Profesor::~Profesor(){


    delete zvanje_profesor;
    delete oblast;
    cout<<"Izbrishan e profesor"<<endl;
}


/* -------------------------------------------------------------------------------------------------------------------------- */

Asistent::Asistent(char *Ime,char*Prezime,int Godina,char*Zvanje,char*Mentor,int Predmeti):Vraboten(Ime,Prezime,Godina){
postavi_Asistent(Zvanje,Mentor,Predmeti);
}

void Asistent::postavi_Asistent(char *Zvanje, char *Mentor, int Predmeti){

    zvanje_asistent = new char[strlen(Zvanje) + 1]; // postavuvanje na zvanje
    assert(zvanje_asistent !=0);
    strcpy(zvanje_asistent,Zvanje);

    mentor = new char[strlen(Mentor) + 1]; // postavuvanje na ime i prezime na mentor
    assert(mentor !=0);
    strcpy(mentor,Mentor);
    br_predmeti_ast = Predmeti;

}

void Asistent::prikazi_Asistent() const{
    prikazi_Podatoci();
    cout<<"Zvanje: "<<zvanje_asistent<<endl;
    cout<<"Mentor: "<<mentor<<endl;
    cout<<"Broj na predmeti: "<<br_predmeti_ast<<endl;
}

Asistent::Asistent(Asistent const&init):Vraboten(init.ime,init.prezime,init.godina){
    postavi_Asistent(init.zvanje_asistent,init.mentor,init.br_predmeti_ast);
}


Asistent::~Asistent(){


    delete mentor;
    delete zvanje_asistent;
    cout<<"Izbrishan e asistent"<<endl;
}


/* -------------------------------------------------------------------------------------------------------------------------- */

Demonstrator::Demonstrator(char *Ime,char*Prezime,int Godina,int Vreme_od,int Vreme_do):Vraboten(Ime,Prezime,Godina){

    postavi_Demonstrator(Vreme_od,Vreme_do);
}


void Demonstrator::postavi_Demonstrator(int Vreme_od, int Vreme_do){
    vreme_od = Vreme_od;
    vreme_do = Vreme_do;
}

void Demonstrator::prikazi_Demonstrator() const{
    prikazi_Podatoci();
    cout<<"Rabotno vreme: "<<vreme_od<<"-"<<vreme_do<<endl;

}
Demonstrator::Demonstrator(Demonstrator const&init):Vraboten(init.ime,init.prezime,init.godina){
    postavi_Demonstrator(init.vreme_od,init.vreme_do);
}

Demonstrator::~Demonstrator(){


    cout<<"Izbrishan e demonstrator"<<endl;
}


// kraj










