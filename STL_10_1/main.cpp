#include <iostream>
#include<memory>
#include<exception>
using namespace std;

class Integer {

public:

   // Integer konstruktor

   Integer( int i = 0 ): value( i ){

      cout << "Konstruktor za Integer " << value << endl;
   }

   // Integer destruktor

   ~Integer(){

      cout << "Destruktor za Integer " << value << endl;
   }

    void setInteger( int i ){
        value = i;}

   int getInteger() const{

      return value; }


private:

   int value;
};




int main()
{
     auto_ptr< Integer > ptrToInteger( new Integer( 7 ) );

     try {
         if(ptrToInteger->getInteger()==7) // najprvo se fakja isklucokot no ne se brishi t.e destruktorot ne se izvrshuva pa duri na krajot na programata se izvrshuva destruktorot
             throw ptrToInteger;



     } catch (  auto_ptr< Integer > &ptoInteger) {
         cout<<"Isklucok"<<endl;

     }

    return 0;
}
