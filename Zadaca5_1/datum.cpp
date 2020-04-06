#include <iostream>
#include"datum.h"

using namespace std;

Datum::Datum(int mn, int dy, int yr){

    month = (mn>0 && mn<=12) ? mn : 1;
    year = (yr>1900 && yr<2021) ? yr:2020;

    static const int daysPerMonth[ 13 ] =
          {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ( dy > 0 && dy <= daysPerMonth[ month ] )
          day = dy;

       if ( month == 2 &&      // Fevruary: Proverka za prestapni godini
            dy == 29 &&
            ( year % 400 == 0 ||
             ( year % 4 == 0 && year % 100 != 0 ) ) )
          day = dy;

}
void Datum::print() const{

    cout<<month<<"/"<<day<<"/"<<year<<endl;
}

int Datum::get_mn(){return month;}
int Datum::get_dy(){return day;}
int Datum::get_yr(){return year;}
void Datum::set_dat(int x, int y, int z){

month = x;
day = y;
year = z;
}
