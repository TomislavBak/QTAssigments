#include <iostream>
#include<cstring>
#include<vector>
#include"vlekac.h"
#include"ptici1.h"
#include"cicac.h"
#include"zivotno.h"
#include"datum1.h"

using namespace std;

int main()
{
char *ime,Ime[30];
char pol;
int y_r,m_r,d_r,y_z,m_z,d_z, y_v,m_v,d_v,y_s,m_s,d_s;
char z,k,t;
char prezivar,letac;
bool kraj = true;
vector<Vlekac>vlekaci;
vector<Ptici>ptici;
vector<Cicaci>cicaci;



while (kraj) {

    cout<<"1) Novo zivotno\n"<<"2) Prikazuvanje na brojna sostojba\n"
     <<"3) Prikazuvanje na zivotni od dadena grupa\n"<<"4) Prikazuvanje na cela lsita\n"
    << "5) Zivotni koi treba da se vakciniraat vo rokod edna nedela\n"<<"6) Izlezi od menito\n"<<endl;

    cin>>z;
    switch (z) {

    case'1':{
        cout<<"1) Cicac\n"<<"2) Ptica \n"
         <<"3) Vlekac\n"<<endl;
        cin>>k;
         cout<<"Vnesete go negovoto ime"<<endl;
         cin>>Ime;
         ime = new char[strlen(Ime)+1];
         strcpy(ime,Ime);

         cout<<"Vnesete go negoviot pol"<<endl;
         cin>>pol;


        cout<<"Vnesete go datumot na ragjanje vo format y/m/d"<<endl;
        cin>>y_r;
        cin>>m_r;
        cin>>d_r;
        cout<<"Vnesete go datumot na doagjanje vo zoo vo format y/m/d"<<endl;
        cin>>y_z;
        cin>>m_z;
        cin>>d_z;
        cout<<"Vnesete go datumot na negovata posledna vakcinacija vo format y/m/d"<<endl;
        cin>>y_v;
        cin>>m_v;
        cin>>d_v;

        switch (k) {
        case'1':{
            cout<<"Vnesete dali cicacot e prezivar [d/n]"<<endl;
            cin>>prezivar;
            Cicaci cicac(y_r,m_r,d_r,y_z,m_z,d_z,y_v,m_v,d_v,ime,pol,prezivar);
            cicaci.push_back(cicac);
            delete [] ime;

        }// kraj na vnesuvanje na cicac
            break;
        case'2':{
             cout<<"Vnesete dali pticata e letac [d/n]"<<endl;
             cin>>letac;
             Ptici ptica(y_r,m_r,d_r,y_z,m_z,d_z,y_v,m_v,d_v,ime,pol,letac);
             ptici.push_back(ptica);
             delete [] ime;
        }// kraj na vnesuvanje na ptica
            break;
        case'3':{
            cout<<"Vnesete go datumot na negovata naredna vakcinacija vo format y/m/d"<<endl;
            cin>>y_s;
            cin>>m_s;
            cin>>d_s;
            Vlekac vlekac(y_r,m_r,d_r,y_z,m_z,d_z,y_v,m_v,d_v,y_s,m_s,d_s,ime,pol);
            vlekaci.push_back(vlekac);
            delete [] ime;
        }// kraj na vnesuvanje na vlekac
            break;

        }

    }// kraj na vnesuvanje na novo zivotno
        break;

    case'2':{
       cout<<"Brojna sostojba na cicaci"<<cicaci[0].get_Count()<<endl;
       cout<<"Brojna sostojba na ptici"<<ptici[0].get_Count()<<endl;
       cout<<"Brojna sostojba na vlekaci"<<vlekaci[0].get_Count()<<endl;
    } // kraj na brojna sostojba
        break;

    case'3':{
        cout<<"1) Cicac\n"<<"2) Vlekac\n"
         <<"3) Ptica\n"<<endl;
        cin>>t;
        switch (t) {

        case'1':{
            for(int i = 0;i<(int)cicaci.size();i++){
                cicaci[i].prikazi_Podatoci();
            }
        } // kraj na prikazuvanje na cicaci
            break;
        case'2':{
            for(int i = 0;i<(int)ptici.size();i++){
                ptici[i].prikazi_Podatoci();
            }
        }// kraj na prikazuvanje na ptici
            break;

        case '3':{
            for(int i = 0;i<(int)vlekaci.size();i++){
                vlekaci[i].prikazi_Podatoci();
            }
        }
            break;
        }
        } // kraj na prikazuvanje na zivotni od dadena klasa
        break;

    case'4':{
        for(int i = 0;i<(int)cicaci.size();i++){
            cicaci[i].prikazi_Podatoci();
        }

        for(int i = 0;i<(int)ptici.size();i++){
            ptici[i].prikazi_Podatoci();
        }

        for(int i = 0;i<(int)vlekaci.size();i++){
            vlekaci[i].prikazi_Podatoci();
        }

    }
        break;// kraj na prikazuvanje na cela lista


    case'5':{
        int y,m,d;
        cout<<"Vnesete go deneshniot datum vo format y/m/d"<<endl;
        cin>>y;
        cin>>m;
        cin>>d;
       Date t(0,0,0);
        for(int i = 0;i<(int)cicaci.size();i++){
        t = cicaci[i].presmetaj_Vakcinacija();
          if((m == t.get_month())&& (t.get_day() - d <7))
              cicaci[i].prikazi_Podatoci();
          if(( m != t.get_month())&&((t.get_day()+30) - d <7))
              cicaci[i].prikazi_Podatoci();

        }// kraj na prikaz na cicaci koi treba da se vakciniraat vo rok od edna nedela

        for(int i = 0;i<(int)ptici.size();i++){
        t = ptici[i].presmetaj_Vakcinacija();
          if((m == t.get_month())&& (t.get_day() - d <7))
              ptici[i].prikazi_Podatoci();
          if(( m != t.get_month())&&((t.get_day()+30) - d <7))
             ptici[i].prikazi_Podatoci();

        }// kraj na prikaz na ptici koi treba da se vakciniraat vo rok od edna nedela


        for(int i = 0;i<(int)vlekaci.size();i++){
        t = vlekaci[i].presmetaj_Vakcinacija();
          if((m == t.get_month())&& (t.get_day() - d <7))
              vlekaci[i].prikazi_Podatoci();
          if(( m != t.get_month())&&((t.get_day()+30) - d <7))
             vlekaci[i].prikazi_Podatoci();

        }// kraj na prikaz na vlekaci koi treba da se vakciniraat vo rok od edna nedela

    }
    break;

    case'6': kraj = false;
        break;




    } // kraj na glavno meni







} // kraj na while






    return 0;
}
