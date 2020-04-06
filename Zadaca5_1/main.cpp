#include <iostream>
#include "zivotno.h"
#include <vector>
#include<cstring>
using namespace std;

int main()
{
    bool proceed = true;
    Datum dat;
    vector <Zivotno> zivotni;
    int m,d,y,m1,d1,y1,m2,d2,y2,lenght,k1,k2,k3;
    char z,ime[30],tip,pol,pr;
while(proceed == true){
    cout<<"a) Novo zivotno\n"<<"b) Prikazuvanje na brojna sostojba\n"
     <<"c) Prikazuvanje na zivotni od dadena grupa\n"<<"d) Prikazuvanje na cela lsita\n"
    << "e) Zivotni koi treba da se vakciniraat vo rokod edna nedela\n"<<"f) Izlezi od menito\n"<<endl;

    cin>>z;

    switch (z) {

    case 'a':
       { cout<<"Vnesete ime"<<endl; // vnesuvanje na site potrebni podatoci
        cin>>ime;
        cout<<"Vnesete tip"<<endl;
        cin>>tip;
        cout<<"Vnesete pol"<<endl;
        cin>>pol;
        cout<<"Vnesete datum na ragjanje"<<endl;
        cin>>m;
        cin>>d;
        cin>>y;
        cout<<"Vnesete datum na doagjanje vo zoo"<<endl;
        cin>>m1;
        cin>>d1;
        cin>>y1;
        cout<<"Vnesete datum na vakciniranje"<<endl;
        cin>>m2;
        cin>>d2;
        cin>>y2;
        Zivotno zivotno(m,d,y,m1,d1,y1,tip,pol,ime,m2,d2,y2);
        zivotni.push_back(zivotno);} // dodavame nov element

        break;
    case 'b':
        lenght = zivotni.size();
        cout<<"Momentalno ima "<<lenght<<" zivotni"<<endl;
        break;
    case 'c':
        cout<<"Vnesi go tipot na zivotnite";// prikaz na site podatoci na zivotnite od vnesen tip
        cin>>pr;
        for(int i = zivotni.size();i>=0;i--){
        if(zivotni[i].Pronajdi_tip() == pr){
            zivotni[i].Prikazi_Podatoci();
        }
        }
        break;
    case 'd':

        for(int i = zivotni.size();i>=0;i--){
            zivotni[i].Prikazi_Podatoci();
        }
        break;
    case 'e':
        cout<<"Vnesete go deneshniot datum";
        cin>>k1;
        cin>>k2;
        cin>>k3;
        for(int i = zivotni.size();i>=0;i--){
            dat = zivotni[i].Presmetaj_vakcinacija();
            if((dat.get_mn() - k1 == 0)&&(dat.get_dy() - k2 <7)){
                zivotni[i].Prikazi_Podatoci();
            }
        }

        break;
    case 'f':
        proceed = false;
        break;


    }

}
    return 0;
}
