#include <iostream>

void add_five(int& num);

int main(void){
    int a =10;
    int& a_ref=a;
    a+=10;
    std::cout << a << ' ' <<a_ref << std::endl;
    a_ref *=10;
    
    //call add_five
    add_five(a);
    std::cout << a << ' ' <<a_ref << std::endl;
    
    
    return 0;
}

void add_five(int& num) {
    num+=5;
}