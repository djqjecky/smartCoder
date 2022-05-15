#include <iostream>
#include <variant>
#include <any>
#include <mutex>
#include <shared_mutex>
#include <chrono>
#include <thread>
#include <future>
#include <any>
#include <optional>

[[deprecated("asda")]]auto Do()
{
    return 1;
};
auto func = [](auto a){};
template<typename T1>
T1 g_instance = T1(3.14);
template<>
const char* g_instance<const char*> = "asdasda";

int main(int, char**) {
    std::shared_mutex t_mutex;
   auto fut =  std::async([&]()
    {
    std::shared_lock<std::shared_mutex> mtex_s(t_mutex); 
     while(true)
     {
         std::this_thread::sleep_for(std::chrono::microseconds(2000));

     }
    });
    std::unique_lock<std::shared_mutex> mtex_s(t_mutex); 

   // std::optional<int> sadas=1;

    const auto t_tem = g_instance<const char*>;
    int ss = 0b1010'0101;


/*
    if(int a = 1;a>=1){

    }
    */

while(true)
{
     std::this_thread::sleep_for(std::chrono::microseconds(2000));
}
    //auto [x,y] = [](){return 1,2;};


    std::cout << "Hello, world!\n";
    std::cout << "Hello, world!\n";
}