#include <iostream>
#include"imenik.h"
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    int min;
    string str1,str2;
    string Ime;
    int br;
    Imenik p;
 vector<Imenik>v;

 for(int i = 0;i<3;i++){

     cout<<"Vnesi ime:"<<endl;
     cin>>Ime;
     cout<<"Vnesi broj:"<<endl;
     cin>>br;
     Imenik nov(Ime,br);
    v.push_back(nov);

 }



min = 0;
for(int i =0 ;i<2;i++){
min = i;
for(int j = i+1;j<3;j++){
    str1 = v[j].get_Ime();
    str2 = v[min].get_Ime();
    if(str1<str2)
    min = j;
}
p = v[i];
v[i] = v[min];
v[min] = p;

}

 for(int i=0;i<3;i++){

     v[i].print();
 }



    return 0;
}
