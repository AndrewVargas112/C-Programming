
//you already know this
#include <iostream>

namespace first{
   int a =5;
    void print(){
 std::cout << "first" <<std::endl; 
 }
}

namespace second{
    int a =10;
        void print(){
        std::cout << "second" <<std::endl; 
    }
}

int main(void){
 first::print(); 
 second::print();
 first::a;
 second::a;
return 0;
}  