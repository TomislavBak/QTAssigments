#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

template<class T>
void palindrom(const vector<T>v1);

int main()
{
    vector<int>vec1;

    vec1.push_back(1);
    vec1.push_back(2);
    vec1.push_back(1);
    palindrom(vec1);

    return 0;
}

template<class T>
void palindrom(const vector<T>v1){
vector<T>v2;
v2.reserve(v1.size());
 reverse_copy(v1.begin(),v1.end(),v2.begin()); // go kopiram vektorot po obraten redosled

    if(equal(v1.begin(),v1.end(),v2.begin())) // go poreduvam so originalniot ako se isti e palindorm
        cout<<"Vektorot e palindrom"<<endl;
    else cout<<"Vektorot ne e palindrom"<<endl;
}
