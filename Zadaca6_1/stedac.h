#ifndef STEDAC_H
#define STEDAC_H
#include"covek.h"
class Stedac{
public:
    Stedac(char* ,int = 0); // ime,prezime,adresa,tel broj,poceten bilans ne znam dali dobro razbrav,
                            //no izgleda treba da bidat sitesmesteni vo eden string.
    int get_brojStedaci();
    void novKredit(int = 0);
    void print() const;
    float presmetaj_Kamata();


private:

    static float kamata; // kamatata za sekoj objekt
    static int brojStedaci; // brojot na shtedaci
    int bilans; //bilansot
    int kredit;
    Covek covek;

};


#endif // STEDAC_H
