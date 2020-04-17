#include <iostream>
#include"formi.h"
#include"formi1.h"
#include<vector>
using namespace std;

int main()
{
    vector<Kvadrat>kvadrati;
    vector<Pravoagolnik>pravoagolnici;
    vector<Triagolnik>triagolnici;
    vector<Trapez>trapezi;
    vector<Kocka>kocki;
    vector<Kvadar>kvadari;
    vector<Piramida>piramidi;
    char z,t,q,k;
    bool kraj = true;
    while(kraj){
    cout<<"1. Vnesuvanje na figura\n"<<"2.Pecatenje na figuri\n"<<"3. Kraj"<<endl;
    cin>>z;
    switch (z) {
    case '1':{
         cout<<"1. 2D\n"<<"2. 3D\n"<<endl;
         cin>>t;
         switch (t) {
         case '1':{
             cout<<"1. Kvadrat\n"<<"2. Pravoagolnik\n"<<"3.Triagolnik\n"<<"4. Trapez"<<endl;
             cin>>q;
             switch (q) {
             case '1':{Kvadrat kvadrat("Kvadrat",1);
             kvadrati.push_back(kvadrat);}
                 break;

             case '2': {Pravoagolnik pravoagolnik("Pravoagolnik",2);
             pravoagolnici.push_back(pravoagolnik);}
                 break;

             case '3':{Triagolnik triagolnik("Triagolnik",3);
             triagolnici.push_back(triagolnik);}
                 break;
             case '4':{Trapez trapez("Trapez",4);
             trapezi.push_back(trapez);}
                 break;

             }// kraj na vnesuvanje na 2D
         }
    break;
         case '2':{
             cout<<"1. Kocka\n"<<"2. Kvadar\n"<<"3.Piramida\n"<<endl;
             cin>>q;
             switch (q) {
             case '1':{Kocka kocka("Kocka",1);
             kocki.push_back(kocka);}
                 break;

             case '2': {Kvadar kvadar("Kvadar",2);
             kvadari.push_back(kvadar);}
                 break;

             case '3':{Piramida piramida("Triagolnik",3);
            piramidi.push_back(piramida);}
                 break;


             }}
             break;

         }

         }// kraj na vnesuvanje na figura



        break;


    case '2':{
        cout<<"1. 2D\n"<<"2. 3D\n"<<endl;
        cin>>k;
        switch (k) {
        case '1':{                                     // pecatenje na site 2D elementi i nivna kolicina
            for(int i = 0;i<(int)kvadrati.size();i++){
                kvadrati[i].print();
            }
            cout<<"Vkupen broj na kvadrati"<<kvadrati[0].get_Count()<<endl;
            for(int i = 0;i<(int)pravoagolnici.size();i++){
                pravoagolnici[i].print();
            }
          cout<<"Vkupen broj na pravoagolnici"<<pravoagolnici[0].get_Count()<<endl;

          for(int i = 0;i<(int)triagolnici.size();i++){
              triagolnici[i].print();
          }
        cout<<"Vkupen broj na triagolnici"<<triagolnici[0].get_Count()<<endl;

        for(int i = 0;i<(int)trapezi.size();i++){
            trapezi[i].print();
        }
      cout<<"Vkupen broj na trapezi"<<trapezi[0].get_Count()<<endl;


        }
            break;

        case '2':{                                     // pecatenje na site 3D elementi i nivna kolicina
        for(int i = 0;i<(int)kocki.size();i++){
            kocki[i].print();
        }
        cout<<"Vkupen broj na kvadrati"<<kocki[0].get_Counter()<<endl;
        for(int i = 0;i<(int)kvadari.size();i++){
            kvadari[i].print();
        }
      cout<<"Vkupen broj na pravoagolnici"<<kvadari[0].get_Counter()<<endl;

      for(int i = 0;i<(int)piramidi.size();i++){
          piramidi[i].print();
      }
    cout<<"Vkupen broj na triagolnici"<<piramidi[0].get_Counter()<<endl;

} break;
        }                                                        // kraj na pecatenje
        break;

    }

    case '3': kraj = false;
    break;}







} // kraj na while

    return 0;
}
