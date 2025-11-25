#include<iostream>


using namespace std;




class Hero{


    private :
    string signature;
    public:
    int level ;
    int health ;
    string name ;

    Hero(int l,int h,string n){


        cout<<"this key word location "<<this <<endl;
        level=l;
        health=h;
        name=n;

    }

    string getSignature(){
        return signature;
    }

    void setSignature(string str){
        signature=str;
    }


};
int main(){

    Hero *h1=new Hero(1,2,"yash ");


    cout<<"address of hero h1"<<h1<<endl;

    cout<<"size of hero class is : "<<sizeof(Hero)<<endl;

    h1->setSignature("RKO");

    cout<<"it will print the signature "<<h1->getSignature()<<endl;






    return 0;
}