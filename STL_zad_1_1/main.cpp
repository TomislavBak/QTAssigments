#include <iostream>
#include"array_sort.h"
using namespace std;




int main()
{


    Array<int> t(9);
    Array<double>q(4);

    t.sort_Array();
   q.sort_Array();


   t.print_Array(); // ke pechati vo 4 koloni
    q.print_Array();

    return 0;
}
