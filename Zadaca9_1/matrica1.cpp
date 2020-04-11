#include<iostream>
#include"matrica1.h"
#include<iomanip>
#include<cassert>
using namespace std;
// Default konstruktor
Matrica::Matrica(int rowSize, int colSize){
size_row = (rowSize > 0? rowSize:10);
size_col = (colSize > 0? colSize:10);


ptr=new int *[size_row]; // incijaliziranje na memorija
  for(int i=0;i<size_row;i++)
  ptr[i]=new int[size_col];


  for(int i = 0; i<size_row;i++){ // incijalizacija na matrica
  for(int j = 0; j<size_col;j++){
      ptr[i][j] = 0;
  }
  }

++matrixCount;
}

//Konverziski konstruktor

Matrica::Matrica(double x,double y){
    size_row = (int)x;
    size_col = (int)y;
}


Matrica::Matrica(const Matrica& init):size_row(init.size_row),size_col(init.size_col){
    for(int i=0;i<size_row;i++)
    ptr[i]=new int[size_col]; // sozdadi mesto za niza
    assert(ptr != 0); // zavrshi ako nema dvolno mem
    ++matrixCount; // izbroi ushte eden objekt

    for(int i = 0; i<size_row;i++){ // incijalizacija na matrica
    for(int j = 0; j<size_col;j++){
        ptr[i][j] = init.ptr[i][j];
    }
    }
}

//Destruktor

Matrica::~Matrica(){
    delete []ptr;
    --matrixCount;
}
// operator =
const Matrica &Matrica::operator=(const Matrica &right){
    if(&right !=this){ // dali ima samododeluvanje

if((size_row !=right.size_row)||(size_col !=right.size_col)){
    delete[]ptr; // vrati mesto
    size_row = right.size_row;
    size_col = right.size_col;// smeni ja goleminata na objektot
    for(int i=0;i<size_row;i++)
    ptr[i]=new int[size_col]; // sozdadi mesto za niza
    assert(ptr != 0); // zavrshi ako nema dvolno mem

    }

for(int i = 0; i<size_row;i++){ // incijalizacija na matrica
for(int j = 0; j<size_col;j++){
    ptr[i][j] = right.ptr[i][j];
}
}
}

    return *this; // ovozmozuva x=y=z
}

int Matrica::getSize_cols() const{
    return size_col;
}

int Matrica::getSize_rows() const{
    return size_row;

}
// Preklopuvanje na operator za sobiranje
Matrica Matrica::operator+(Matrica &operand2){
    Matrica t(size_row,size_col);

    for(int i = 0; i<operand2.size_row;i++){
    for(int j = 0; j<operand2.size_col;j++){

    t.ptr[i][j] = ptr[i][j] + operand2.ptr[i][j];

    }
    }
    return t;
}

Matrica operator+(int &operand2,Matrica &sum){
   Matrica t(sum.size_row,sum.size_col);

    for(int i = 0; i<sum.size_row;i++){
    for(int j = 0; j<sum.size_col;j++){

    t.ptr[i][j] =sum.ptr[i][j] + operand2;

    }
    }
    return t;

}

Matrica operator+(Matrica &sum,int &operand2){
  Matrica t(sum.size_row,sum.size_col);

    for(int i = 0; i<sum.size_row;i++){
    for(int j = 0; j<sum.size_col;j++){

    t.ptr[i][j] =sum.ptr[i][j] + operand2;

    }
    }
    return t;

}

// Preklopuvanje na operator za odzemanje

Matrica Matrica::operator-(Matrica &operand2){
    Matrica t(size_row,size_col);

    for(int i = 0; i<operand2.size_row;i++){
    for(int j = 0; j<operand2.size_col;j++){

    t.ptr[i][j] = ptr[i][j] - operand2.ptr[i][j];

    }
    }
    return t;
}

Matrica operator-(int &operand2,Matrica &sum){
   Matrica t(sum.size_row,sum.size_col);

    for(int i = 0; i<sum.size_row;i++){
    for(int j = 0; j<sum.size_col;j++){

    t.ptr[i][j] =sum.ptr[i][j] - operand2;

    }
    }
    return t;

}

Matrica operator-(Matrica &sum,int &operand2){
    Matrica t(sum.size_row,sum.size_col);

    for(int i = 0; i<sum.size_row;i++){
    for(int j = 0; j<sum.size_col;j++){

    t.ptr[i][j] =sum.ptr[i][j] - operand2;

    }
    }
    return t;

}
// Preklopuvanje na operator za mnozenje
Matrica Matrica::operator*(Matrica &operand2){
    Matrica t(size_row,operand2.size_col);


    for(int i =0;i<size_row;i++){
        for(int j =0;j<operand2.size_col;j++){
            for(int q=0;q<size_col;q++)
            t.ptr[i][j] = t.ptr[i][j]+( ptr[i][q] * operand2.ptr[q][j]) ;
        }
    }

    return t;
}

Matrica operator*(Matrica &sum,int &operand2){
    Matrica t(sum.size_row,sum.size_col);

    for(int i = 0; i<sum.size_row;i++){
    for(int j = 0; j<sum.size_col;j++){

    t.ptr[i][j] =sum.ptr[i][j] * operand2;

    }
    }
    return t;}

 Matrica operator*(int &operand2,Matrica &sum){
       Matrica t(sum.size_row,sum.size_col);

        for(int i = 0; i<sum.size_row;i++){
        for(int j = 0; j<sum.size_col;j++){

        t.ptr[i][j] =sum.ptr[i][j] * operand2;

        }
        }
        return t;

    }


 bool Matrica::operator ==(const Matrica &operand2)const{
     if((size_row != operand2.size_row)||(size_col != operand2.size_col))
         return false;

     for(int i = 0; i<size_row;i++){
     for(int j = 0; j<size_col;j++){

        if(ptr[i][j] != operand2.ptr[i][j])
            return false;

     }
     }
     return true;
 }


 // Preklopen indeksen operator za ne-const nizi

 int &Matrica::operator()(int subscript1,int subscript2){

 assert(0 <=subscript1&&subscript1 < size_row);
 assert(0 <=subscript2&&subscript2 < size_col);
 return ptr[subscript1][subscript2]; // vrati referenca

 }

 // preklopen indeksen za const nizi

 const int&Matrica::operator()(int subscript1,int subscript2) const{
     assert(0 <=subscript1&&subscript1 < size_row);
     assert(0 <=subscript2&&subscript2 < size_col);
     return ptr[subscript1][subscript2]; // vrati referenc

 }









// Vnesuvanje na matrica
istream &operator>>(istream &input,Matrica &a){

    for(int i = 0; i<a.size_row;i++){
    for(int j = 0; j<a.size_col;j++){
        input >> a.ptr[i][j];
        cout<<endl;
    }
    }
    return input;
}
//Pecatenje na matrica
ostream &operator<<(ostream &output,Matrica &a){
    for(int i = 0; i<a.size_row;i++){
    for(int j = 0; j<a.size_col;j++){
        output <<setw(3)<< a.ptr[i][j];

    }
    cout<<endl;

    }
return output;
}






