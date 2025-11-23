#include<iostream>

#include<thread>

#include<chrono>


namespace sc = std::chrono;

// just declare it 
using namespace std::chrono_literals;  

int main(){


    // it will intialize the time with current time
    auto start = sc::steady_clock::now();


    // use it 
    std::this_thread::sleep_for(3s);

    std::this_thread::sleep_for(3s); 

    auto end= sc::steady_clock::now();

    auto duration =sc::duration_cast<sc::seconds>(end-start);

    std::cout<<duration.count()<<std::endl;


    return 0;
}



