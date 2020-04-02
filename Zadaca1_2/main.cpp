#include <iostream>

using namespace std;


int tripleCallByValue(int count){
    int x = count;
    return 3*x;  //Vrakjanje na kopijata
}

int tripleCallByReference(int count){
    int &x = count;
    x = 3*x;
    return count; //Vrakjanje na istata promenliva


}

int main()
{
    int x = 4 , z = 5;

    cout<<"Vrednosta od funkcijata: "<<tripleCallByValue(x)<<endl;

    cout<<"Vrednosta od funkcijata: "<<tripleCallByReference(z)<<endl;

    return 0;
}
