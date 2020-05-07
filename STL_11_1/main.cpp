#include <iostream>
#include<cmath>
#include<iomanip>
using namespace std;



int main()
{
    int n,m;
    cout<<"Vnesi ja dolzinata"<<endl;
    cin>>n;
    cout<<"Vnesi ja shirinata na kolonite"<<endl;
    cin>>m;
    cout<<left<<setw(m)<<"i"<<setw(m)<<"i^2"<<setw(m)<<"sqrt(i)"<<setw(m)<<"sqrt^3(i)"<<endl;
    for(int i  = 1;i<n;i++){
    cout<<left<<setw(m)<<i<<setw(m)<<i*i<<setw(m)<<setprecision(2)<<sqrt(i)<<setw(m)<<setprecision(2)<<pow(i,-3)<<right<<endl;
    }



    return 0;
}



