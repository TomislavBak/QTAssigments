#include <iostream>
#include<cstring>
#include"mnozestvo.h"
using namespace std;
// vo zadacata se funkcionira vo red osven kade sho go pecatam C, ne mozev da najdam vo shto e problemot.
int main()
{
    int a;
    double b;
    char C_c[10];
    Mnozestvo<int>A;
    Mnozestvo<double>B;
    Mnozestvo<char*>C;
    bool kraj = true;
    char choice1;
    while(kraj){
    cout<<"1.Dodaj element vo A\n"<<"2.Dodaj element vo B\n"<<"3.Dodaj element vo C\n"<<"4.Prikazi go A\n"<<"5.Prikazi go B\n"<<"6.Prikazi go C\n"<<"7.Prikazi najgolemi elementi\n"<<"8.Prikazi broj na elementi vo mnozestva\n"<<"9.Kraj\n"<<endl;
    cin>>choice1;


    switch (choice1) {
    case'1':{
        cin>>a;
        A = Mnozestvo<int>(a);


    } break;

    case'2':{
        cin>>b;
        B = Mnozestvo<double>(b);

    }break;

    case'3':{
        cin>>C_c;

        C = Mnozestvo<char*>(C_c);

    }break;

    case'4':{
        A.print();

    }break;

    case'5':{
        B.print();
    }break;

    case'6':{
        C.print();
    }break;

    case'7':{
    cout<<A.max_el()<<endl;
    cout<<B.max_el()<<endl;
    cout<<C.max_el()<<endl;
    }break;

    case'8':{
        cout<<A.get_count()<<endl;
        cout<<B.get_count()<<endl;
        cout<<C.get_count()<<endl;
    }break;

    case'9': kraj = false;
        break;


    } // kraj na switch
}//kraj na while
    return 0;
}
