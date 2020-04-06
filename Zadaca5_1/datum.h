#ifndef DATUM_H
#define DATUM_H
class Datum{

public:
    Datum(int =1, int = 1, int = 2020); // predefiniran konstruktor
    void print() const;
    int get_mn();
    int get_dy();
    int get_yr();
    void set_dat(int,int,int);
private:
    int month;
    int day;
    int year;
};
#endif // DATUM_H
