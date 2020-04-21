#ifndef DVODIMENZ_H
#define DVODIMENZ_H
#include"oblik.h"

class DvoDimenzionalni : public Oblik{
public:

    virtual string get_Tip();
    virtual int get_Area() = 0;
    virtual int get_Volume();
};

#endif // DVODIMENZ_H
