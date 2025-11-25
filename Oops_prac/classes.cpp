#include<iostream>

using namespace std;



class Hero{

    public:
    int health ;
    string str;
    int level;

    Hero(int h,string s,int l){
        health=h;
        str=s;
        level=l;
    }
};
int main(){


    Hero h1= Hero(2,"yash",4);


    cout<<h1.health<<" "<<h1.str<<" "<<h1.level<<endl;




    return 0;
}