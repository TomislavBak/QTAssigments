#include <iostream>
#include"garaza.h"
#include<exception>
using namespace std;

int main()
{
    try {Garaza obj1("Volvo","Nishto");

    }
    catch (Motor &motor_err) {
        cout<<"Isklucok vo main"<<endl;

    }



    return 0;
}
