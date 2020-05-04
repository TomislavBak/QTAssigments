#include <iostream>
#include<stdlib.h>
#include<vector>
#include<algorithm>
#include <numeric>
using namespace std;
bool parni(int x){
    return x%2==0;
}
bool pomali_2000(int x){
    return x<2000;
}

bool range_2000_4000(int x){
    return x>2000 && x<4000;
}

bool range_4000_6000(int x){
    return x>4000 && x<6000;
}

bool range_6000_8000(int x){
    return x>6000 && x<8000;
}

bool range_8000_10000(int x){
    return x>8000 && x<10000;
}

int main()
{

    vector<int>broevi;
    int broj,parni_br,range1,range2,range3,range4,range5,sredna_vr;
    for(int i = 0;i<10000;i++){
        broj = rand()%10000; // random broj od 0 do 9999
        broevi.push_back(broj);
    }


    parni_br = count_if(broevi.begin(),broevi.end(),parni);
    range1 = count_if(broevi.begin(),broevi.end(),pomali_2000);
    range2 = count_if(broevi.begin(),broevi.end(),range_2000_4000);
    range3 = count_if(broevi.begin(),broevi.end(),range_4000_6000);
    range4 = count_if(broevi.begin(),broevi.end(),range_6000_8000);
    range5 = count_if(broevi.begin(),broevi.end(),range_8000_10000);
    sredna_vr = accumulate(broevi.begin(),broevi.end(),0);
    sredna_vr = sredna_vr/10000;

    cout<<"Parni: "<<parni_br<<endl;
    cout<<"Pomali od 2000: "<<range1<<endl;
    cout<<"Od 2000 do 4000: "<<range2<<endl;
    cout<<"Od 4000 do 6000: "<<range3<<endl;
    cout<<"Od 6000 do 8000: "<<range4<<endl;
    cout<<"Od 8000 do 10000: "<<range5<<endl;




    return 0;
}
