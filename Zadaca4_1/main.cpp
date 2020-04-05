#include <iostream>
#include "dropki.h"
using namespace std;


int main()
{
Dropki obj1(0,0),obj2(0,0),obj3(0,0),obj4(0,0);
int a,b,c,d;
char z;

cout<<"Vnesete ja prvata dropka ";
cin>>a;
cout<<"/";
cin>>b;
obj1.set_Dropki(a,b);



cout<<"Vnesete ja vtorata dropka"<<endl;
cin>>c;
cout<<"/";
cin>>d;
obj2.set_Dropki(c,d);


cout<<"a) Sobiranje\n"<<"b) Odzemanje\n"
 <<"c) Mnozenje\n"<<"d) Delenje\n"<<endl;

cin>>z;

switch (z) {

    case 'a': obj4 = obj3.add_Dropki(obj1,obj2,obj3);
              obj4.print_Dropki();
              obj4.print_Real();
    break;

    case 'b': obj4 = obj3.sub_Dropki(obj1,obj2,obj3);
              obj4.print_Dropki();
              obj4.print_Real();
    break;

    case 'c': obj4 = obj3.mul_Dropki(obj1,obj2,obj3);
              obj4.print_Dropki();
              obj4.print_Real();
    break;

    case 'd': obj4 = obj3.div_Dropki(obj1,obj2,obj3);
              obj4.print_Dropki();
              obj4.print_Real();
    break;

}



    return 0;
}
