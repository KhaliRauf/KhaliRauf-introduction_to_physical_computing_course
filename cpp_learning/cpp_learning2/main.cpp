#include "header.hpp"
#include<iostream>


int main(){

    simpleHeader simpleObject;

    simpleObject.hello();

    simpleObject.distance = 10;

    std::cout<<simpleObject.distance<<std::endl;

}