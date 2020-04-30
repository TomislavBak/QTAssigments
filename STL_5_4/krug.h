#ifndef KRUG_H
#define KRUG_H
class Krug{
public:
    Krug(int = 0);
   int area();
   int get_side();
    ~Krug();
private:
    int r;
    int P;
};

Krug::Krug(int R){
   r = R;
   area();
}
int Krug::get_side(){
    return r;
}

int Krug::area(){
    P = 2*r*3.14;
    return P;
}

Krug::~Krug(){

}



#endif // KRUG_H
