#include<iostream>
using namespace std;


int main(){

    char name[10];


    //strcpy(name,"yash");

    strncpy(name,"hello",5);

    name[5]='\0';


    int n=strlen(name);

    

    cout<<n;

    cout<<endl;

    char name1[10];


    cout<<endl;

    strcpy(name1,"hellobrot");

    name1[5]='\0';


    cout<<name1<<endl;



    cout<<name<<endl;



    cout<<"comparing the value"<<endl;


    bool vlaue=strcmp(name,name1);

    if(!vlaue) cout<<"it is equal";
    else cout<<"not equal at all ";

    cout<<endl;




    return 0;
}