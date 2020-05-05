#include <iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<iterator>
#include<numeric>
#include"vraboten.h"
using namespace std;

int main()
{
    int a;
    vector<Vraboten>vraboteni;
    Vraboten vraboten1(70,"Tomislav"),vraboten2(120,"Bojan"),vraboten3(100,"Marko");
    vraboteni.push_back(vraboten1);
    vraboteni.push_back(vraboten2);
    vraboteni.push_back(vraboten3);
    ostream_iterator<Vraboten>output(cout," ");
    sort(vraboteni.begin(),vraboteni.end());
    for(int i = 0;i<(int)vraboteni.size();i++){ // pecatenje na lista
        cout<<vraboteni[i].get_bodovi()<<"  "<<vraboteni[i].get_ime()<<endl;
    }

   a =  accumulate(vraboteni.begin(),vraboteni.end(),0);
   cout<<"Vkupno za isplata "<<a<<endl;

    return 0;
}
