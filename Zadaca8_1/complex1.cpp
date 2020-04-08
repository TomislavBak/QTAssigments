#include <iostream>

using std::cout;

#include "complex1.h"

// Konstruktor
Complex::Complex( double r, double i )
   : real( r ), imaginary( i ) { }

// Preklopi operator za sobiranje
Complex Complex::operator+( const Complex &operand2 ) const
{
   return Complex( real + operand2.real,
                   imaginary + operand2.imaginary );
} // kraj na funkcijata operator+

// Preklopi operator za odzemanje
Complex Complex::operator-( const Complex &operand2 ) const
{
   return Complex( real - operand2.real,
                   imaginary - operand2.imaginary );
} // kraj na funkcijata operator-

// Preklopi operator =
const Complex& Complex::operator=( const Complex &right )
{
   real = right.real;
   imaginary = right.imaginary;
   return *this;   // ovozmozhuva kaskadiranje
} // ekraj na funkcijata operator=

Complex Complex::operator*(Complex & mul){
    Complex t;
    t.real = real * mul.real;
    t.imaginary = imaginary * mul.real;
    return(t);
}
// Mnozenje so int
Complex operator*(Complex &mul,int a){
    Complex t;
    t.real = mul.real*a;
    return t;
}
Complex operator*(int a,Complex &mul){
    Complex t;
    t.real = mul.real*a;
    return t;
}
// Ednakvost
Complex Complex::operator==(Complex &operand2){
    if((real == operand2.real) && (imaginary == operand2.imaginary)) return 1;
    else return 0;
}
//Neednakvost
Complex Complex::operator!=(Complex &operand2){
    if((real != operand2.real) && (imaginary != operand2.imaginary)) return 1;
    else return 0;
}

Complex &Complex::operator+=(Complex &operand2){ // ne sum siguren dali samo trebshe da se primenat operaciite + - * ili veke preklopenite
    real = real + operand2.real;
    imaginary = imaginary + operand2.imaginary;

    return *this;
}

Complex &Complex::operator-=(Complex &operand2){
    real = real - operand2.real;
    imaginary = imaginary - operand2.imaginary;

    return *this;
}

Complex &Complex::operator*=(Complex &operand2){
    real = real * operand2.real;
    imaginary = imaginary * operand2.imaginary;
    return *this;
}



// Ispechati objekt od klasa Complex vo oblik: (a, b)
ostream  &operator<<(ostream &output, Complex &num){
    output << '(' << num.real << ", " << num.imaginary << ')';
   return output;}
