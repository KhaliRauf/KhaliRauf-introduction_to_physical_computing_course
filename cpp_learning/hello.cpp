#include<iostream>

using namespace std;


int addition(){

    int x = 60;
    int j = 70;     
    int z = j + x;

    return z; 
}
int subtraction(){


    int p = 50;
    int h = 90;
    int u = h - p;

    return u; 
}
int multiplication(int val1,int val2){


    //int x = 40;
    //int j = 30;
    int z = val1 * val2;

    return z; 
}int division(){


    int x = 10;
    int j = 20;
    int z = j / x;

    return z; 
}
int main(){

std::cout<<"Hello world I am learning c++"<<std::endl;

int year = 2024;
std::string age = "24";
float distance = 5.2;
double temperature = 5.28;
int numb_of_students = 10;
char keyword ='b';
bool isPresent = true;
int h = 8;
int j = 5;
int z = 4;

std::cout<<"value of age is : "<<age<<std::endl;
std::cout<<"value of distance is : "<<distance<<std::endl;
std::cout<<"value of temperature is : "<<temperature<<std::endl;
std::cout<<"value of numb_of_students is : "<<numb_of_students<<std::endl;
std::cout<<"value of keyword is : "<<keyword<<std::endl;
std::cout<<"value of isPresent is : "<<isPresent<<std::endl;
std::cout<<"            "<<std::endl;
std::cout<<"value of h plus j is : "<<h + j<<std::endl;
std::cout<<"value of h times j is : "<<h * j<<std::endl; 
std::cout<<"value of h minus j is : "<<h - j<<std::endl;
std::cout<<"value of h divided by z is : "<<h / z<<std::endl;
std::cout<<"value of the remainder of the division of h by j is : "<<h % j<<std::endl;
std::cout<<"            "<<std::endl;
std::cout<<"is h less than j : "<<(h < j)<<std::endl;
std::cout<<"is j greater than z : "<<(j > z)<<std::endl;
std::cout<<"is z equal to j : "<<(z == j)<<std::endl;
std::cout<<"is z less than or equal to j : "<<(z <= j)<<std::endl;
std::cout<<"is h less than or equal to j : "<<(h >= j)<<std::endl;
std::cout<<"is h greater than j and greater than z : "<<(h>j && h>z)<<std::endl;
std::cout<<"is j less than z or less than h : "<<(j<z || z<h)<<std::endl;

std::cout<<""<<std::endl;
// addition();
int add = addition();
std::cout<<"result of sum of x and j is : "<<add<<std::endl;
// subtraction();
int minus = subtraction();
std::cout<<"result of subtraction of p from h is : "<<minus<<std::endl;
// division();
int divide = division();
std::cout<<"result of division of j by x is : "<<divide<<std::endl;

int val1;
int val2;

// multiplication();
int times = multiplication(val1,val2);
std::cout<<"please enter the first number : ";
std::cin>>val1;

std::cout<<"please enter the second number : ";
std::cin>>val2;

times = multiplication(val1,val2 + 1);

std::cout<<"result of multiplication of x from j is : "<<times<<std::endl;


}