#include <string>
#include <iostream>


int main(void){
    //std::string str1("hola");
    //std::string str2(str1);
    //std::string str3(100,'&');
    //std::string str4(str1, 6,5);
    //std::cout << str3 <<std::endl;
    //std::cout << str4 << std::endl;
    std::string s0("R");
    std::string s1= "G";
    std::string s2 =s0+s1;
    s2+='R';
    s2+=(s1<s2) ? "Y":s1;
    std::cout <<s2 << "M" << std::endl;
    return 0;
}
