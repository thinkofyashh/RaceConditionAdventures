#include <iostream>
using namespace std;

class Hero {
public:
    int level;
    string name;
    int *power;
    char *signature;

    Hero(int l, string s,int *p,char sig[]) {
        level = l;
        name = s;
        power=p;

        signature=new char[100];

        strcpy(signature,sig);


        cout<<this<<endl;
    }

    Hero(Hero &h){
        cout<<"this is new copy constructor"<<endl;
        this->level=h.level;
        this->name=h.name;
        this->power=h.power;
        signature=new char[100];
        strcpy(this->signature,h.signature);

    }

    void Print(){
        cout<<endl;
        cout<<"[  ";
        cout<<this->level<<"  ";
        cout<<this->name<<" ";
        cout<<this->power<<" ";
        cout<<this->signature<<"  ]";
        cout<<endl;
    }
};

ostream &operator <<(ostream &os,const Hero &h){
    os<<"("<<h.level<<" "<<h.name<<" "<<*(h.power)<<" )";
    return os;
}

int main() {
    int power=10;
    int *p=&power;
    char name[20]="hellomynameisyas";
    Hero *h1=new Hero(3,"yash",p,name);

    h1->Print();


    Hero *h2=new Hero(*h1);

    // only h1 will print the power as 20 .not h2
    // beacuse after copying you change h1.power to point to newPower and h2 is still pointing hte power 
    //Because shallow copy means they share the pointer only at the time of copying, not permanently. 
    int newPower=20;

    h1->power=&newPower;

    cout<<*h1<<endl;


    cout<<"Printing the Object h2"<<endl;

    cout<<*h2<<endl;



    
    


}
