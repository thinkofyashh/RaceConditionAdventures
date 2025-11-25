#include<iostream>

#include"student.cpp"

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


    cout<<sizeof(Student)<<endl;

    // this is called statically allocated memory .
    
    Hero h1= Hero(2,"yash",4);

    cout<<"Size of the class is :"<<sizeof(Hero)<<endl;

    cout<<h1.health<<" "<<h1.str<<" "<<h1.level<<endl;

    cout<<"This is Student class"<<endl;

    Student s1=Student("yash");

    cout<<"Student is "<<s1.name<<endl;




    return 0;
}