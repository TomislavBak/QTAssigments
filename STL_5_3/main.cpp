#include <iostream>
#include<deque>
#include<vector>
#include<algorithm>
#include<iterator>
using namespace std;

int main()
{

    deque<int>d;
    vector<int>v;

    d.push_front(32);
    d.push_front(67);
    d.push_front(17);
    d.push_front(89);
    deque<int>::iterator it1;
    for(it1 = d.begin();it1 != d.end();it1++){
       cout<<*it1<<endl;
    }
    v.reserve(d.size());

    reverse_copy(d.begin(),d.end(),inserter(v,v.end()));
    v.size();

    vector<int>::iterator it;
    for(it = v.begin();it != v.end();it++){
       cout<<*it<<endl;
    }


    return 0;
}
