#ifndef VRABOTEN_H
#define VRABOTEN_H
#include<string>
using namespace std;
class Vraboten{
public:
    Vraboten(int = 0,string = " ");
    int get_bodovi();
    string get_ime();
    bool operator <(Vraboten &);
   friend int operator +(int ,Vraboten &);
    ~Vraboten();

private:
    int bodovi;
    string ime;
};

Vraboten::Vraboten(int B, string Ime){
    bodovi = B;
    ime = Ime;
}

int Vraboten::get_bodovi(){
    return bodovi;
}

string Vraboten::get_ime(){
    return ime;
}
bool Vraboten::operator<(Vraboten &obj1){ // preklopuvam operator za da raboti sort
    return bodovi<obj1.bodovi;
}

int operator+(int ac,Vraboten &obj1){ // preklopuvam operator za da raboti accumulate

return ac+obj1.get_bodovi();
}

Vraboten::~Vraboten(){

}

#endif // VRABOTEN_H
