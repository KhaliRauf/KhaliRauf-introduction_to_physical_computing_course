#include<iostream>

int main(){

    
    int *z;

    int m = 10;

    int*x = new int(9);

    z=x;

    z =& m;

    *x = m;

    std::cout<<"memory adress that x points to : "<<x<<std::endl;
    std::cout<<"value contained in the memory adress : "<<*x<<std::endl;

    std::cout<<"memory adress that z points to : "<<z<<std::endl;


    // deleting a pointer
    z = nullptr;
    x = nullptr;

    // other ways to delete a pointer 
    // z = 0;
    // x = 0;

     std::cout<<"memory adress that x points to : "<<x<<std::endl;
    std::cout<<"value contained in the memory adress : "<<*x<<std::endl;

    std::cout<<"memory adress that z points to : "<<z<<std::endl;










}