#ifndef DROPKI1_H
#define DROPKI1_H
class Dropki{

public:
    Dropki(int,int); // konstruktor
    int get_x();
    int get_y();
    void set_Dropki(int,int);
    Dropki operator+(Dropki &ob1);
    Dropki operator-(Dropki &ob1);
    Dropki operator*(Dropki &ob1);
    Dropki operator/(Dropki &ob1);
    void reduce();
    void print_Dropki();
    void print_Real();

private:
    int x;
    int y;

};
#endif // DROPKI1_H
