#include <iostream>
#include"arrays_i_o.h"
using namespace std;

int main()
{

    Array<int> ar(5);
    Array<double> aray(3);


    ar.print_Array();

    ar.change_Element(2,99);

    ar.print_Array();


    return 0;
}
