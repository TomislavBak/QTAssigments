
#include <iostream>

using std::cout;
using std::endl;

#include "complex1.h"

int main()
{
    int a = 2;
   Complex x, y( 4.3, 8.2 ), z( 3.3, 1.1 );

    cout <<x<<endl;


   x = y + z;
  cout <<x<<endl;


   x = y - z;
   cout <<x<<endl;

   x = y * z;

  cout <<x<<endl;

  x = y * a;

  cout<<x<<endl;

    x = a * y;

    cout<<x<<endl;
    Complex o(3.1,1.2);
    o+=y;
    cout<<o<<endl;

    Complex i(4.3,1.6);
    i*=y;
    cout<<i<<endl;

return 0;
} // kraj main


