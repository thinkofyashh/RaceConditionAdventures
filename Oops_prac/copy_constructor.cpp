#include <iostream>
using namespace std;

class Hero {
public:
    int level;
    string name;

    Hero(int l, string s) {
        level = l;
        name = s;

        cout<<this<<endl;
    }

    Hero(Hero &h){
        cout<<"this is new copy constructor"<<endl;
        this->level=h.level;
        this->name=h.name;
    }
};

ostream &operator <<(ostream &os,Hero h){
    os<<"("<<h.level<<" "<<h.name<<" )";
    return os;
}

int main() {
    Hero *h1=new Hero(3,"yash");



    Hero *h2=new Hero(*h1);

    cout<<*h1<<endl;

    cout<<"Printing the Object h2"<<endl;

    cout<<*h2<<endl;



    
    


}
