#include <iostream>
#include<string>
#include<vector>
#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<string>words;
    string s = "Jas sum Tomislav i ziveam vo Bitola Tomislav Bitola jadam musaka .";
    string tmp = " ";


    string word;


    istringstream ss(s);
    do {

            ss >> word;



            words.push_back(word);


        } while (ss);


    sort( words.begin(), words.end() ); // sortiranje po redosled
    words.erase( unique( words.begin(), words.end() ), words.end() );// brishenje na site duplikati

cout<<endl;
cout<<"Nova niza"<<endl;
for(int i = 0;i<(int)words.size();i++){
    cout<<words[i]<<endl;

}






    return 0;
}
