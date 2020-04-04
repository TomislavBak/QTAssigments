#include <iostream>
#include <vector>
using namespace std;

class Cuboid{
    int x,y,z;
public:
    void set();
    int get_x(){return x;}
    int get_y(){return y;}
    int get_z(){return z;}
    int Area();
    int Volume();
    bool cube;
};

void Cuboid::set(){
    cout<<"Enter x = "<<endl;
    cin>>x;

    cout<<"Enter y = "<<endl;
    cin>>y;

    cout<<"Enter z = "<<endl;
    cin>>z;
}

int Cuboid::Area(){
    return 2*(x*y + x*z + y*z);
}

int Cuboid::Volume(){
    return x*y*z;
}



int p = 0;

void NewObject(){

    p++;

}







int main()
{
    vector <Cuboid> k; // upotrebuvam vektorza da mozham da dodavam novi clenovi
    Cuboid c;

   int num;
   char choice1,choice2;
   cout<<"Would you like to open the menu: [y/n]"<<endl;
   cin>>choice1;

    label:
   if(choice1=='y'){
      cout<<"a) Create a new object\n"<<"b) Set dimensions\n"
       <<"c) Dimensions of all the objects\n"<<"d) Dimensions of particular obejct\n"
       <<"e) Print all the objects that satisfy the condition"<<endl;
      cin>>choice2;
      switch(choice2){

      case 'a':  // a i b od menito najverojatno treba zaedno da bidat ama ne go sfativ bash menito
        NewObject();
          break;

      case 'b':
          c.set();
          k.push_back(c);
          if((c.get_x()==c.get_y())||(c.get_x()==c.get_z())||(c.get_y()==c.get_z())){ // proverka dali vnesenata figura e kocka
            k[p].cube = true;

          }
          else { k[p].cube = false;}
           break;

      case 'c':
          for(int i=0;i<p;i++){
            cout<<"Dimensions of object"<<i<<"are : x = "<<k[i].get_x()<<" y = "<<k[i].get_y()<<" z = "<<k[i].get_z()<<endl; // pecatenje na site vrednosti

          }
      break;
      case 'd':
          cout<<"Enter the number of the object:"<<endl;
          cin>>num;
          cout<<"Dimensions of object"<<num<<"are : x = "<<k[num].get_x()<<" y = "<<k[num].get_y()<<" z = "<<k[num].get_z()<<endl; // pecatenje na odredena vrednost
      break;
      case 'e':
         int min = 0,minl = 0;

         for(int l = 0;l<p;l++){

              if(k[l].cube==false){  // obicna proverkaza minimum i pecatenje brojot na objektot koj go ima minimumot
                  if(k[l].Area()<min){
                  min = k[l].Area();
                  minl = l;}
              }

          }
          cout<<"The object that satisfied the condition is "<<minl<<endl;
      break;
      }


   }
   else return 0;


   cout<<"Would you like to open the menu: [y/n]"<<endl;
   cin>>choice1;
   if(choice1=='y'){
       goto label;
   }


    return 0;
}
