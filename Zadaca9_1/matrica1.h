#ifndef MATRICA1_H
#define MATRICA1_H
#include<iostream>
using namespace std;

class Matrica {
public:
    Matrica(int = 10,int = 10); // default konstruktor
    Matrica(const Matrica&); // copy konstruktor
    Matrica(double = 0.0,double = 0.0); // konverziski konstruktor
    ~Matrica(); // destruktor
    int getSize_rows() const;
    int getSize_cols() const;
    const Matrica &operator=(const Matrica &);
    // Sobiranje
    Matrica operator+(Matrica &);
    friend Matrica operator+(Matrica &,int &);
    friend Matrica operator+(int &,Matrica &);
    //Odzemanje
    Matrica operator-(Matrica &);
    friend Matrica operator-(Matrica &,int &);
    friend Matrica operator-(int &,Matrica &);
    //Mnozenje
    Matrica operator*(Matrica &);
    friend Matrica operator*(Matrica &,int &);
    friend Matrica operator*(int &,Matrica &);

    bool operator ==(const Matrica&)const;
    bool operator!=(const Matrica &right)const{
        return !(*this == right);
    }
    // indeksen operator
    int &operator ()(int,int);
    const int &operator()(int,int)const;

    friend ostream &operator<<(ostream &, Matrica &);
    friend istream &operator>>(istream &, Matrica &);

private:
    int **ptr;
    int size_row;
    int size_col;
    int matrixCount;



};


#endif // MATRICA1_H
