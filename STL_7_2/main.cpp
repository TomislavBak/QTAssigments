#include <iostream>
#include<stdlib.h>
#include<algorithm>
#include<map>
#include<vector>
#include<iterator>
#include"karta.h"
#include<time.h>

using namespace std;
typedef multimap<int,Karta,less<int>>mmid;



int main()
{
mmid igrachi;
mmid::const_iterator it;

vector<Karta>shpil;
int a1[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,12,13,14};
char b1[] = {'S','B','L','C'}; // S - Srce, B - Baklava, L - List, C - Crno
int br_igrachi;

// polnenje na shpil
for(int i  = 0;i<4;i++){
    for(int j = 0;j<13;j++){
        Karta karta(a1[j],b1[i]);
        shpil.push_back(karta);
    }
}
srand (time(NULL));
int v = rand()%30;
cout<<v<<endl;
for(int i = 0 ;i<v;i++){ // za celo vreme razlichno da gi mesha

random_shuffle(shpil.begin(),shpil.end());
}


//for(int i = 0;i<(int)shpil.size();i++){
  //  cout<<shpil[i].get_vrednost()<<" "<<shpil[i].get_boja()<<endl;
//}

cout<<"Vnesi broj na igrachi [2/4]."<<endl;
cin>>br_igrachi;
int sum1 = 0,sum2 = 0,sum3 = 0,sum4 = 0;


int cnt = 0;
for(int j = 0;j<br_igrachi;j++){

for(int i = 0; i <52/br_igrachi;i++){
   igrachi.insert(mmid::value_type(j,shpil[i+cnt])); // cnt + i za da gi zemi ostanatite karti a ne pak istitite

}
cnt = cnt + 52/br_igrachi;
}



for(it = igrachi.begin();it != igrachi.end();it++){
    cout<<it->first<<" "<<it->second.get_boja()<< " "<<it->second.get_vrednost()<<endl;
    if(it->first==0) sum1 = sum1 + it->second.get_vrednost(); // za zadachata pod b ke se proveruva samo dali it->second.get_boja == S, ako e ke se duplira vrednosta
    if(it->first==1) sum2 = sum2 + it->second.get_vrednost();
    if(it->first==2) sum3 = sum3 + it->second.get_vrednost();
    if(it->first==3) sum4 = sum4 + it->second.get_vrednost();
}



cout<<"Igrach 1   |"<<"Igrach 2   |"<<"Igrach 3   |"<<"Igrach 4   |"<<endl;
cout<<sum1<<"               "<<sum2<<"          "<<sum3<<"         "<<sum4<<endl;






    return 0;
}



