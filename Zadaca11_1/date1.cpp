#include<iostream>
#include"date1.h"
using namespace std;

Date::Date(int y, int m, int d){


    set_Date(y,m,d);
}

void Date::set_Date(int y, int m, int d){

    month = (m>0 && m<=12) ? m : 1;
    year = (y>1900 && y<2021) ? y:2020;

    static const int daysPerMonth[ 13 ] =
          {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if ( d > 0 && d <= daysPerMonth[ month ] )
          day = d;

       if ( month == 2 &&      // Fevruary: Proverka za prestapni godini
            d == 29 &&
            ( year % 400 == 0 ||
             ( year % 4 == 0 && year % 100 != 0 ) ) )
          day = d;
}

int Date::get_year()const{
    return year;
}
int Date::get_month() const{
    return month;
}
int Date::get_day() const{
    return day;
}


void Date::print_Date() const{

    cout<<month<<"-"<<day<<"-"<<year;

}

Date::~Date(){

}
