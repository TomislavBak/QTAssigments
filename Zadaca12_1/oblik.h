#ifndef OBLIK_H
#define OBLIK_H
class Oblik{
public:
    Oblik(char *,int); // konstruktor
    Oblik(const Oblik&);// copy konstruktor
    void vnesi_Strana();
    void print()const;
    ~Oblik();// destruktor
protected:
    char *ime; // na figurata

    int broj_strani;
    int *strani; // vrednostite na stranite



};

#endif // OBLIK_H
