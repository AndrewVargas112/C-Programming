#include <iostream>
#include <random>
int main(void){
    //generate seed
    std::random_device rd;
    //create rand num
    std::mt19937 eng(rd());
    //define distribution
    std::uniform_int_distribution<int> dist(1,100);
    for (int i =0; i<20;i++){
        int x=dist(eng);
        std::cout <<x <<std::endl;
    }
    return 0;
}