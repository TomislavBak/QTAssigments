#include <iostream>
#include<map>
#include<iterator>

using namespace std;

typedef  map<int,long int, less<int>> mid; // upotrebuvam map za da nema preklopuvanje na isti vrednosti
int main()
{
    mid procesi;


    procesi.insert(mid::value_type(1,38163));
    procesi.insert(mid::value_type(2,45187));
    procesi.insert(mid::value_type(4,67891));
    procesi.insert(mid::value_type(3,23456));

    mid::const_iterator it;

    for(it = procesi.begin();it != procesi.end();it++){
        cout<<it->first<<" "<<it->second<<endl;
    }



    return 0;
}
