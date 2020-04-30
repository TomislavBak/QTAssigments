#include <iostream>
#include<vector>
#include"mnozestvo1.h"
#include"krug.h"
#include"kvadrat.h"
#include"pravoagolnik.h"
using namespace std;

template <class T>
void max(vector<Mnozestvo<T>> k1){
    int max = 1;

    for(int i = 0;i<(int)k1.size()-1;i++){
        max = i;

        for(int j = i+1;j<(int)k1.size();j++){

            if(k1[j].get_area()>k1[max].get_area())
                max = j;
        }

}
   cout<<"Element br:"<<max<<endl;
   cout<<"Najgolema povrshina"<<k1[max].get_area()<<endl;


}



int main()
{
    int a,b;

vector<Mnozestvo<Kvadrat>> kv;
vector<Mnozestvo<Pravoagolnik>> pv;
vector<Mnozestvo<Krug>> krug;

Mnozestvo<Kvadrat>kvadrati;
Mnozestvo<Pravoagolnik>pravoagolnici;
Mnozestvo<Krug>krugovi;

bool kraj = true;
char choice1;
while(kraj){
cout<<"1.Nov kvadrat\n"<<"2.Nov pravoagolnik\n"<<"3.Nov krug\n"<<"4.Prikazi go mnoz na kvadrati\n"<<"5.Prikazi go mnoz na pravoagolnici\n"
   <<"6.Prikazi go mnoz na krugovi\n"<<"7.Prikazi najgolemi elementi\n"<<"8.Prikazi broj na elementi vo mnozestva\n"<<"9.Kraj\n"<<endl;
cin>>choice1;


switch (choice1) {
case'1':{
    cout<<"Vnesi strana"<<endl;
    cin>>a;
    kvadrati = Mnozestvo<Kvadrat>(a);
    kv.push_back(kvadrati);



} break;

case'2':{
    cout<<"Vnesi strani"<<endl;
    cin>>a;
    cin>>b;
    pravoagolnici = Mnozestvo<Pravoagolnik>(a,b);
    pv.push_back(pravoagolnici);

}break;

case'3':{
    cout<<"Vnesi radius"<<endl;
    cin>>a;

    krugovi = Mnozestvo<Krug>(a);

    krug.push_back(krugovi);

}break;

case'4':{
    for(int i = 0;i<(int)kv.size();i++){
        kv[i].print();
    }

}break;

case'5':{
    for(int i = 0;i<(int)pv.size();i++){
        pv[i].print();
    }
}break;

case'6':{
    for(int i = 0;i<(int)krug.size();i++){
        krug[i].print();
    }
}break;

case'7':{
max(kv);
//pravoagolnici.max_el();
//krugovi.max_el();
}break;

case'8':{
    cout<<kvadrati.get_count()<<endl;
    cout<<pravoagolnici.get_count()<<endl;
    cout<<krugovi.get_count()<<endl;
}break;

case'9': kraj = false;
    break;


} // kraj na switch
}//kraj na while
return 0;
}


