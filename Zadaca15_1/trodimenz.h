#ifndef TRODIMENZ_H
#define TRODIMENZ_H
#include"oblik.h"
class TriDimenzionalni : public Oblik{
public:

    virtual string get_Tip();
    virtual int get_Area() = 0;
    virtual int get_Volume() = 0;
};
#endif // TRODIMENZ_H
