#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
int dolz;

vector<char>v1;
vector<char>v2;
cout<<"Vnesi dolzina na prviot zbor"<<endl;
cin>>dolz;
char zbor1[dolz];
cout<<"Vnesi go prviot zbor"<<endl;
cin>>zbor1;
for(int i = 0;i<dolz;i++){
    v1.push_back(zbor1[i]);
}
for(int i = 0;i<dolz;i++){
    cout<<v1[i]<<endl;
}

cout<<"Vnesi dolzina na vtoriot zbor"<<endl;
cin>>dolz;
char zbor2[dolz];
cout<<"Vnesi go vtoriot zbor"<<endl;
cin>>zbor1;
for(int i = 0;i<dolz;i++){
    v2.push_back(zbor2[i]);
}

if((equal(v1.begin(),v1.end(),v2.end()))==true){
    cout<<"Anagrami"<<endl;}
else cout<<"Ne se anagrami"<<endl;


    return 0;
}
