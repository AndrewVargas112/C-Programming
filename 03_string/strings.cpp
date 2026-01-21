#include <iostream>
#include <string>

int main(void){
    //create string
    std::string str= "hola";
    std::cout << str <<std::endl;

    std::cout <<str<< " has size "<<str.length()<< std::endl;
    //add to end of string
    str+=" World";
    std::cout <<str<< " has size "<<str.length()<< std::endl;

    return 0;
}
