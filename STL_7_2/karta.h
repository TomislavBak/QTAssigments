#ifndef KARTA_H
#define KARTA_H

class Karta{
public:
    Karta(int = 0,char = 0);
    int get_vrednost() const;
    char get_boja() const;
    ~Karta();
private:
    int vrednost;
   char boja;
};



Karta::Karta(int V,char B){
    vrednost = V;
    boja = B;
}

char Karta::get_boja()const{
    return boja;
}

int Karta::get_vrednost() const{
    return vrednost;
}

Karta::~Karta(){

}
#endif // KARTA_H
