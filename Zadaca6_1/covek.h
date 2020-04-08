#ifndef COVEK_H
#define COVEK_H
#include<vector>
class Covek{
public:
    Covek(char *); // konstruktor
    ~Covek(); // destruktor
    void get_print() const;
private:
    char *lice; // dali site podatoci treba da bidat vo eden string?

};




#endif // COVEK_H
