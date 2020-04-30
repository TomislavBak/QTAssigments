#include <iostream>
#include<algorithm>
#include<list>
#include<string>

using namespace std;

int main()
{
    list<string>l1;
    list<string>l2;
    list<string>l3;

    l1.push_front("bakracevski@live.com");
    l1.push_front("tomislav@live.com");
    l2.push_front("random@gmail.com");
    l2.push_front("random@gmail.com");
    l3.push_front("random123@gmail.com");

    // soedinuvanje na listite
    l1.merge(l2);
    l1.merge(l3);



    //brishenje na duplikati
    unique(l1.begin(),l1.end());

    // pecatenje
    list<string>::iterator it;
    for(it = l1.begin();it != l1.end();it++){
       cout<<*it<<endl;
    }





    return 0;
}
