#include <string>
#include <iostream>


int main(void){
    std::string str1("hola");
    std::string str2(str1);
    std::string str3(100,'&');
    std::string str4(str1, 6,5);
    std::cout << str3 <<std::endl;
    std::cout << str4 << std::endl;
    return 0;
}

