#include <iostream>
#include"kvadrat.h"
#include"tiagolnik.h"
#include"pravoagolnik.h"
#include"kocka.h"
#include"kvadar.h"
#include"piramida.h"
using namespace std;


int main()
{;

Kvadar kvadar(2,3,8);
kvadar.print();


Piramida piramida(1,2,3,4);
piramida.print();


Kvadrat kvadrat(4);

kvadrat.print();

    return 0;
}
