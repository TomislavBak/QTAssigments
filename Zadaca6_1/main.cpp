#include <iostream>
#include"stedac.h"
#include<cstring>
#include "covek.h"
using namespace std;

int main()
{

    char *vnesi,podatoci[60];
    cout<<"Vnesete gi podatociteza noviot stedach"<<endl;
    cin>>podatoci;
    vnesi =new char[strlen(podatoci) + 1];
    strcpy(vnesi,podatoci);
    Stedac sted(vnesi);

   sted.print();



    return 0;
}
