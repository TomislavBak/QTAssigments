#include <iostream>
#include"uplata.h"
#include<vector>
#include<map>
using namespace std;


int main()
{
bool kraj = true;
int uplata,y,m,d;
Uplata korisnik1("Tomislav","Bakracevski","1234"),korisnik2("Nikola","Bakracevski","3215"),korisnik3("Ratko","Bakracevski","6127");
vector<Uplata>korisnici;
korisnici.push_back(korisnik1);
korisnici.push_back(korisnik2);
korisnici.push_back(korisnik3);
char choice1;
string pw;


while(kraj){
cout<<"1. Dodaj uplata \n"<<"2. Prikazi uplati za daden stedac \n"<<"3. Kraj"<<endl;

cin>>choice1;

switch (choice1) {

case '1':{ // vnesuvanje na uplata
    cout<<"Vnesi uplata"<<endl;
    cin>>uplata;
    cout<<"Vnesi datum y/d/m"<<endl;
    cin>>y;
    cin>>d;
    cin>>m;
    cout<<"Vnesi pin"<<endl;
    cin>>pw;
    for(int i = 0;i < (int)korisnici.size(); i++){
        if(korisnici[i].get_pw() == pw)
            korisnici[i].nova_Uplata(uplata,y,m,d);
    }

}break;

case'2':{ // pecateje na uplati od daden stedac
    cout<<"Vnesi pin"<<endl;
    cin>>pw;
    for(int i = 0;i < (int)korisnici.size(); i++){
        if(korisnici[i].get_pw() == pw)
            korisnici[i].print();
    }

}break;

case'3': kraj = false;
    break;

}}




    return 0;
}
