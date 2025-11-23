


#include<iostream> 

void func(int x){
    std::cout<<x<<std::endl;
}

void func(int *x){
    std::cout<<&x<<std::endl;
}



int main(){

    func(nullptr);
    func(5);


    return 0;
}