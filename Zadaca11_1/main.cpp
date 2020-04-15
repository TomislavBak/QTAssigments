#include <iostream>
#include"kosuli.h"
#include"date1.h"
#include"pantoloni.h"
#include<vector>
#include<cstring>
using namespace std;





int main()
{
    char z,t; // za izbor
    char *ime,ime_l[30]; // ime za artiklot
    char *golemina,golemina_l[5];
    int y,m,d; //za da datum
    int cena,broj_k = 0,broj_p = 0;
    bool kraj = true;
    vector<Kosuli>kosuli;
    vector<Pantoloni>pantoloni;
    Date dat(1,1,1);


    while(kraj){

        cout<<"1.Dodaj nov artikl\n"<<"2.Prikazi artikli od dadena grupa\n"
            <<"3. Prikazi ja celata lista\n"<<"4. Prikazi artikli koi treba da se nabavat vo rok od edna nedela\n"
            <<"5. Kraj\n"<<endl;
        cin>>z;
        int cena_vkup_pant = 0,cena_vkup_kosul = 0;

        switch (z) {

        case '1':{
                    cout<<"1.Pantaloni\n"<<"2.Koshula"<<endl;
                    cin>>t;

                    cout<<"Vnesi ime na artiklot: "<<endl;
                    cin>>ime_l;
                    ime = new char[strlen(ime_l) + 1];
                    strcpy(ime,ime_l);

                    cout<<"Vnesi golemina na artiklot: "<<endl;
                    cin>>golemina_l;
                    golemina = new char[strlen(golemina_l) + 1];
                    strcpy(golemina,golemina_l);

                    cout<<"Vnesi cena na artiklot: "<<endl;
                    cin>>cena;

                    cout<<"Vnesi datum na pristignuvanje y/m/d: "<<endl;
                    cin>>y;
                    cin>>m;
                    cin>>d;



                    switch (t) {

                    case '1':{ // dodavanje na novi pantoloni
                        broj_p++;
                        Pantoloni pantolon(ime,golemina,cena,y,m,d);
                        pantoloni.push_back(pantolon);
                        delete [] ime;
                        delete [] golemina;

                    }
                        break;
                    case '2':{ // dodavanje na nova koshula
                        broj_k++;
                        Kosuli kosula(ime,golemina,cena,y,m,d);
                        kosuli.push_back(kosula);

                        delete [] ime;
                        delete [] golemina;

                    }
                        break;

                    }

        }
            break;
        case '2':{ // pecatenje na specificen tip
                    cout<<"1.Pantaloni\n"<<"2.Koshula"<<endl;
                    cin>>t;
                    switch (t) {
                    case '1':{
                         for(int i = 0;i<broj_p;i++){
                        pantoloni[i].prikazi_Artikl();
                         }
                    }
                        break;
                    case '2':{
                         for(int i = 0;i<broj_k;i++){
                        kosuli[i].prikazi_Artikl();
                         }
                    }

                    }

        }
            break;
        case '3':{
            for(int i = 0;i<broj_p;i++){
           pantoloni[i].prikazi_Artikl();
           cena_vkup_pant = cena_vkup_pant + pantoloni[i].get_Cena();
            }

            for(int i = 0;i<broj_k;i++){
           kosuli[i].prikazi_Artikl();
           cena_vkup_kosul = cena_vkup_kosul + kosuli[i].get_Cena();
            }

        cout<<"Vkupnata cena e :"<<cena_vkup_pant + cena_vkup_kosul<<endl;

        }
            break;

        case '4':{
            int cena_nabavki = 0;
            cout<<"Vnesi deneshen datum  y/m/d: "<<endl;
            cin>>y;
            cin>>m;
            cin>>d;

            for(int i = 0;i<broj_p;i++){
           dat = pantoloni[i].get_donesen();

           if((dat.get_month() == m)&&((d - dat.get_day())<7)){
               cena_nabavki = cena_nabavki + pantoloni[i].get_Cena();
           }
           if((m >dat.get_month())&&(((d + 30)-dat.get_day())<7)){  // ova treba da se postavii za site meseci so 31 den i za februari
            cena_nabavki = cena_nabavki + pantoloni[i].get_Cena();

           }}



          if(broj_k<3){
          cout<<"Potrebna e naracka na koshuli"<<endl;}
            cout<<"Vkupnata cena za nabavkite e:"<<cena_nabavki<<endl;;

        }
            break;

        case '5':{
            kraj = false;

        }
            break;
        }






    }

    return 0;
}
