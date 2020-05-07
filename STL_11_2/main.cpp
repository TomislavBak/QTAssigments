#include <iostream>
#include<string>
#include<fstream>
using namespace std;

int main()
{
string proba;
ofstream pogolemo_od_10( "Tekst10.txt", ios::out );


ifstream otvori_tekst("Tekst.txt",ios::in);

while(otvori_tekst >> proba){
   otvori_tekst>>proba;
   if(proba.size()>10)
       pogolemo_od_10<<proba<<endl;
}




    return 0;
}
