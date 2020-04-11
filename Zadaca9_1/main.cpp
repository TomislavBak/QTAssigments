#include <iostream>
#include"matrica1.h"

using namespace std;

int main()
{

    int a,b;
    char z;
    bool izlez=true;

    cout<<"Vnesete gi goleminite na  prvata matrica ";
    cin>>a;
    cout<<"|";
    cin>>b;
    Matrica obj1(a,b);
    cout<<"Vnesi gi elementite na matricata"<<endl;
    cin>>obj1;

    cout<<"Vnesete gi goleminite na  prvata matrica ";
    cin>>a;
    cout<<"|";
    cin>>b;
    Matrica obj2(a,b);
    cout<<"Vnesi gi elementite na matricata"<<endl;
    cin>>obj2;


    Matrica obj3(obj1.getSize_rows(),obj1.getSize_cols());
while(izlez){
    cout<<"a) Sobiranje\n"<<"b) Odzemanje\n"
     <<"c) Mnozenje\n"<<"d) Izlez"<<endl;

    cin>>z;


    switch (z) {

        case 'a': if((obj1.getSize_rows()==obj2.getSize_rows())&&(obj1.getSize_cols()==obj2.getSize_cols())){
                  obj3 = obj1 + obj2;
                    cout<<obj3<<endl;}
        else cout<<"Pogreshni dimenzii, ne e vozmozhno sobiranje"<<endl;
        break;

        case 'b': if((obj1.getSize_rows()==obj2.getSize_rows())&&(obj1.getSize_cols()==obj2.getSize_cols())){
            obj3 = obj1 - obj2;
              cout<<obj3<<endl;}
            else cout<<"Pogreshni dimenzii, ne e vozmozhno odzemanje"<<endl;
        break;

        case 'c': if((obj1.getSize_rows()==obj2.getSize_cols())){
            obj3 = obj1 * obj2;
              cout<<obj3<<endl;}
            else cout<<"Pogreshni dimenzii, ne e vozmozhno mnozenje"<<endl;
        break;

    case 'd': izlez = false;
        break;


    }
}






    return 0;
}
