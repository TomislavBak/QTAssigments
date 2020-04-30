#ifndef PRAVOAGOLNIK_H
#define PRAVOAGOLNIK_H
class Pravoagolnik{
public:
    Pravoagolnik(int = 0,int = 0);
    int area();
    int get_side_a();
    int get_side_b();
    ~Pravoagolnik();
private:
    int a;
    int b;
    int P;
};

Pravoagolnik::Pravoagolnik(int A, int B){
    a = A;
    b = B;
    area();
}
int Pravoagolnik::get_side_a(){
    return a;
}

int Pravoagolnik::get_side_b(){
    return b;
}

int Pravoagolnik::area(){
P = a*b;
return P;
}

Pravoagolnik::~Pravoagolnik(){

}




#endif // PRAVOAGOLNIK_H
