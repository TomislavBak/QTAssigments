#include <iostream>
#include"vraboten.h"
#include<vector>
#include<cstring>
using namespace std;

int main()
{
char z,t; // za opcija vo menito
char *ime,ime_l[30];
char *prezime,prezime_l[30];
char *zvanje,zvanje_l[25];
char *oblast,oblast_l[30];
char *mentor,mentor_l[60];
int godina,vreme_od,vreme_do,predmeti;
bool kraj = true;
int broj_prof = 0,broj_ast = 0,broj_dem = 0;
vector <Profesor> profesori;
vector <Asistent> asistenti;
vector <Demonstrator>demonstratori;


while(kraj){
    cout<<"1. Dodavanje na nov vraboten vo listata \n"
        <<"2. Prikazuvanje na listata \n"
        <<"3. Kraj"<<endl;
    cin>>z;

    switch (z) {

    case '1':{
        cout<<"1. Profesor \n"
            <<"2. Asistent \n"
            <<"3. Demonstrator"<<endl;
        cin>>t;
        switch (t) {
        case '1': {
             broj_prof++;
            cout<<"Vnesete ime:"<<endl;
            cin>>ime_l;
            ime = new char[strlen(ime_l) + 1];
            strcpy(ime,ime_l);


            cout<<"Vnesete prezime:"<<endl;
            cin>>prezime_l;
            prezime = new char[strlen(prezime_l) + 1];
            strcpy(prezime,prezime_l);

            cout<<"Vnesete godina na vrabotuvanje"<<endl;
            cin>>godina;

            cout<<"Vnesete zvanje:"<<endl;
            cin>>zvanje_l;
            zvanje = new char[strlen(zvanje_l) + 1];
            strcpy(zvanje,zvanje_l);

            cout<<"Vnesete oblast:"<<endl;
            cin>>oblast_l;
            oblast = new char[strlen(oblast_l) + 1];
            strcpy(oblast,oblast_l);
            cout<<"Vnesete brojot na predmeti"<<endl;
            cin>>predmeti;

            Profesor profesor(ime,prezime,godina,zvanje,oblast,predmeti);
            profesori.push_back(profesor);
            delete ime; delete prezime; delete zvanje;delete oblast;

        }
            break;
       case '2': {
            broj_ast++;
            cout<<"Vnesete ime:"<<endl;
            cin>>ime_l;
            ime = new char[strlen(ime_l) + 1];
            strcpy(ime,ime_l);

            cout<<"Vnesete prezime:"<<endl;
            cin>>prezime_l;
            prezime = new char[strlen(prezime_l) + 1];
            strcpy(prezime,prezime_l);

            cout<<"Vnesete godina na vrabotuvanje"<<endl;
            cin>>godina;

            cout<<"Vnesete zvanje:"<<endl;
            cin>>zvanje_l;
            zvanje = new char[strlen(zvanje_l) + 1];
            strcpy(zvanje,zvanje_l);

            cout<<"Vnesete mentor:"<<endl;
            cin>>mentor_l;
            mentor = new char[strlen(mentor_l) + 1];
            strcpy(mentor,mentor_l);
            cout<<"Vnesete brojot na predmeti"<<endl;
            cin>>predmeti;

            Asistent asistent(ime,prezime,godina,zvanje,mentor,predmeti);
            asistenti.push_back(asistent);
             delete ime; delete prezime; delete zvanje;delete mentor;

        }
            break;
        case '3':{
            broj_dem++;
            cout<<"Vnesete ime:"<<endl;
            cin>>ime_l;
            ime = new char[strlen(ime_l) + 1];
            strcpy(ime,ime_l);

            cout<<"Vnesete prezime:"<<endl;
            cin>>prezime_l;
            prezime = new char[strlen(prezime_l) + 1];
            strcpy(prezime,prezime_l);

            cout<<"Vnesete godina na vrabotuvanje"<<endl;
            cin>>godina;

            cout<<"Vnesete rabotno vreme /n"
                <<"Od"<<endl;
            cin>>vreme_od;
            cout<<"do"<<endl;
            cin>>vreme_do;

            Demonstrator demonstrator(ime,prezime,godina,vreme_od,vreme_do);
            demonstratori.push_back(demonstrator);
            delete ime; delete prezime;

        }
            break;

        }

    }
        break;
    case '2':{

        for(int i =0;i <broj_prof;i++){   // pecatenje na site profesori
            profesori[i].prikazi_Profesor();
        }

        for(int i =0;i< broj_ast;i++){   // pecatenje na site asistenti
            asistenti[i].prikazi_Asistent();
        }

        for(int i =0;i<broj_dem;i++){   // pecatenje na site demonstratori
            demonstratori[i].prikazi_Demonstrator();
        }




    }
        break;
    case '3':
        kraj = false;
        break;

    default: cout<<"Vnesen e pogreshen podatok"<<endl;

    }

}




    return 0;
}
