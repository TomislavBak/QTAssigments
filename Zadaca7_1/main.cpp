#include <iostream>
#include"dropki1.h"
using namespace std;

int main()
{
    Dropki obj3(0,0);
    int a,b,c,d;
    char z;

    cout<<"Vnesete ja prvata dropka ";
    cin>>a;
    cout<<"/";
    cin>>b;
    Dropki obj1(a,b);

    cout<<"Vnesete ja vtorata dropka"<<endl;
    cin>>c;
    cout<<"/";
    cin>>d;

    Dropki obj2(a,b);


    cout<<"a) Sobiranje\n"<<"b) Odzemanje\n"
     <<"c) Mnozenje\n"<<"d) Delenje\n"<<endl;

    cin>>z;

    switch (z) {

        case 'a': obj3 = obj1 + obj2;
                  obj3.print_Dropki();
                  obj3.print_Real();
        break;

        case 'b': obj3 = obj1 - obj2;
                  obj3.print_Dropki();
                  obj3.print_Real();
        break;

        case 'c': obj3 = obj1 * obj2;
                  obj3.print_Dropki();
                  obj3.print_Real();
        break;

        case 'd': obj3 = obj1 / obj2;
                  obj3.print_Dropki();
                  obj3.print_Real();

        break;

    }







    return 0;
}
