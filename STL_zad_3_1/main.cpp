#include <iostream>

using namespace std;

template <class T>
class Zapis{

public:
    Zapis(T,T,T);
    T get_x()const;
    T get_y()const;
    T get_z()const;
    ~Zapis();

private:
    T x;
    T y;
    T z;


};

template <class T>
Zapis<T>::Zapis(T X,T Y, T Z){
    x = X;
    y = Y;
    z = Z;
}

template <class T>
T Zapis<T>::get_x()const{
    return x;
}

template <class T>
T Zapis<T>::get_y()const{
    return y;
}

template <class T>
T Zapis<T>::get_z()const{
    return z;
}

template <class T>
Zapis<T>::~Zapis<T>(){

}



template <class T>
T kontrolor(Zapis<T> &init){
    if((init.get_x() + init.get_y() + init.get_z())>10000){
        cout<<"Zbirot e pogolem od 10000"<<endl;
    }
    else cout<<"Zbirot ne e pogolem od 10000"<<endl;
    return 0;
}

int main()
{
    Zapis<int>obj1(5000,5000,1000);
    Zapis<double>obj2(1000.2,2000.34,500.25);

    kontrolor(obj1);
    kontrolor(obj2);
    return 0;
}
