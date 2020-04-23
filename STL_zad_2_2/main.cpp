#include <iostream>
#include"kvadrati_pravoagolnici.h"

using namespace std;



template <class T>

 void pecati_Pole(T *point,int n){



    for(int i = 0;i<n;i++){
        cout<<point[i]<<endl;
    }
}

 template <class T>

 void sortiraj_Pole(T *arrays,int size){
     int minm = 0;
     T t;
         for(int i = 0;i<size-1;i++){
             minm = i;

             for(int j = i+1;j<size;j++){

                 if(arrays[j]>arrays[minm])
                     minm = j;
             }
         t = arrays[i];
         arrays[i] = arrays[minm];
         arrays[minm] = t;


         }
 }







int main()
{

    Kvadrat *p1;
    Pravoagolnik *p2;
    Kvadrat t(3);
   p1 = new Kvadrat[3] ();
   p2 = new Pravoagolnik[2] ();


 p1[0] = t;
 p1[1].set_Strana(6);
 p1[2].set_Strana(9);

pecati_Pole(p1,3);

p2[0].set_Strana(4,5);
p2[1].set_Strana(3,2);





    return 0;
}
