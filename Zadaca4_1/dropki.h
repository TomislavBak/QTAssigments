#ifndef DROPKI_H
#define DROPKI_H

class Dropki{

public:
    Dropki(int,int); // konstruktor
    int get_x();
    int get_y();
    void set_Dropki(int,int);
    Dropki add_Dropki(Dropki,Dropki,Dropki);
    Dropki sub_Dropki(Dropki,Dropki,Dropki);
    Dropki div_Dropki(Dropki,Dropki,Dropki);
    Dropki mul_Dropki(Dropki,Dropki,Dropki);
    void print_Dropki();
    void print_Real();

private:
    int x;
    int y;

};



#endif // DROPKI_H
