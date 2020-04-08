#ifndef COMLEX1_H
#define COMLEX1_H
#include<iomanip>
#include<iostream>
using namespace std;
class Complex {
public:
   Complex( double = 0.0, double = 0.0 );       // konstruktor
   Complex operator+( const Complex & ) const;  // sobiranje
   Complex operator-( const Complex & ) const;  // odzemanje
   Complex operator*(Complex &); // mnozenje kompleksen so kompleksen
   Complex operator==(Complex &);
   Complex operator !=(Complex &);
   Complex &operator +=(Complex &);
   Complex &operator -=(Complex &);
   Complex &operator *=(Complex &);
   friend Complex operator*(Complex &,int); // mnozenje int so kompleksen
   friend Complex operator*(int,Complex &);
   const Complex &operator=( const Complex & ); // dodeluvanje
   friend ostream &operator <<(ostream &, Complex &);
   friend istream &operator >>(istream &, Complex &);
private:
   double real;       // realen del
   double imaginary;  // imaginaren del
}; // kraj na klasta Complex

#endif // COMLEX1_H
