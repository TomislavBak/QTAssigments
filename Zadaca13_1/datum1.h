#ifndef DATUM1_H
#define DATUM1_H
class Date{
public:
    Date(int,int,int); // konstruktor
    void set_Date(int,int,int);
    void print_Date() const;
    ~Date(); // destruktor
    int get_year() const;
    int get_month() const;
    int get_day() const;
private:
    int year;
    int month;
    int day;

};
#endif // DATUM1_H
