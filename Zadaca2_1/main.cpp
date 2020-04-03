#include <iostream>

using namespace std;

template <class T>
T minimum (T value1, T value2){
    T min = value1;
    if(value2 < min)
        min = value2;

    return min;
}


int main()
{

   int x,y;
   cout<<"Vnesi dva celi broevi\n";
   cin>>x>>y;
   cout<<"Minimalniot broj e :"<<minimum(x,y)<<endl;

   double x1,y1;
   cout<<"Vnesi dva double broevi\n";
   cin>>x1>>y1;
   cout<<"Minimalniot broj e :"<<minimum(x1,y1)<<endl;


   char x2,y2;
   cout<<"Vnesi dva karakteri\n";
   cin>>x2>>y2;
   cout<<"Minimalniot karakter e :"<<minimum(x2,y2)<<endl;





    return 0;
}
