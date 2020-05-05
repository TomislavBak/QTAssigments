#include <iostream>
#include<vector>
#include<stdlib.h>
#include<algorithm>
#include<time.h>
#include<exception>
using namespace std;

    class CopyException : public exception {

    public:

    CopyException():exception(){}
    const char * what () const throw ()
        {
            return "Nemaat ednakvi dolzini";
        }

    };







vector<int> kopiraj(vector<int>ob1,vector<int>ob2){
    if(ob1.size()!=ob2.size()){
        throw CopyException();
    }
    else{
        copy(ob1.begin(),ob1.end(),ob2.begin());
    }
    return ob2;
}



int main()
{
    CopyException cp;
    vector<int>obj1,obj2;
    int a,a1,b,b1;
    srand (time(NULL));
    // generiranje na vektori
     a = rand()%10;
    for(int i = 0;i<a;i++){
      a1 = rand()% 10000 -1;
      obj1.push_back(a1);
    }

    b = rand()%10;
   for(int i = 0;i<b;i++){
     b1 = rand()% 10000 -1;
     obj2.push_back(b1);
   }


   try {
       kopiraj(obj1,obj2);
       cout<<"Uspeshno kopiranje"<<endl;
   }

    catch ( CopyException &cp) {
    cout<<"Neuspeshno kopiranje:"<<cp.what()<<endl;
   }





    return 0;
}
