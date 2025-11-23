#include<iostream>
#include<string>
#include<vector>
#include<map>

class Myobj{

    public:
    int x;
    int y;

};



std::ostream &operator<<(std::ostream &os,Myobj obj){
    os<<"("<<obj.x<<" , "<<obj.y<<")"; 
    return os;
}

int main(){

    int x{2};
    std::vector<int> v{1,2,3,4};

    std::cout<<"Universal Initialization of the vector"<<std::endl;
    for(auto it : v){
        std::cout<<it<<std::endl;
    }


    std::cout<<"Printing the Map "<<std::endl;
    std::map<int,int> m{{1,2},{3,4}};
    for(auto it :m){
        std::cout<<it.first<<" "<<it.second<<std::endl;

    }
    Myobj c{1,2};
    std::cout<<c<<std::endl;

    std::cout << "printing the value of CPP"<<std::endl;
    std::cout<< x<< std::endl;

    return 0;
}