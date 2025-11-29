#include <iostream>
using namespace std;

class Hero {
public:
    int level;
    string name;
    int *power;

    Hero(int l, string s,int *p) {
        level = l;
        name = s;
        power=p;

        cout<<this<<endl;
    }

    Hero(Hero &h){
        cout<<"this is new copy constructor"<<endl;
        this->level=h.level;
        this->name=h.name;
        this->power=h.power;
    }
};

ostream &operator <<(ostream &os,const Hero &h){
    os<<"("<<h.level<<" "<<h.name<<" "<<*(h.power)<<" )";
    return os;
}

int main() {
    int power=10;
    int *p=&power;
    Hero *h1=new Hero(3,"yash",p);

int newPower=20;

    h1->power=&newPower;

    Hero *h2=new Hero(*h1);

    

    cout<<*h1<<endl;


    cout<<"Printing the Object h2"<<endl;

    cout<<*h2<<endl;



    
    


}
