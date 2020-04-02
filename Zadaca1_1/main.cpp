#include <iostream>
// Zadaca 1.1
//Inline funkcija za ploshtina na krug

using namespace std;

float pi = 3.14;
inline void circleArea(){
    int r;
    cout<<"Vnesi go radiusot\n";
    cin>>r;
    cout<<"Radiusot e:"<<pi*(r*r)<<endl;
}


int main()
{
    circleArea();

    return 0;
}
