#include<iostream>

template <typename T>
T checkMax(T num1, T num2){

    if(num1 > num2){

        return num1;
    }
    else{

        return num2;
    }
    // return (num1 > num2) ? true:false;    ||   tenre operator
}



int main (){

    int num1 = 12;
    int num2 =23;

    // std::cout<<"Enter the first value : ";
    // std::cin>>num1;

    // std::cout<<"Enter the second value : ";
    // std::cin>>num2;


    std::string greatest = checkMax("atc","tab");

    std::cout<<"Is num1 greater than num2 : "<<greatest<<std::endl;



    // while
    int x = 1000 ;
    while(x != 0 ){
        std::cout<<"enter 0 to stop the loop : "<<std::endl;
        std::cin>>x;
    }

    int y = 20;
    while ( y >-1){

         std::cout<<"value of y : "<<y<<std::endl;
         --y;
    }
   
   std::cout<<"Hurray I am out of two loops!!"<<std::endl;

    //    Switch statement
    std::cout<<"Enter the value for y : "<<std::endl;
    int j ;
    std::cin>>j;
    switch (j)
    {
    case 50:
        std::cout<<"The value is greater than 0"<<std::endl;
        break;

    case 0:
    std::cout<<"The value is equal to 0"<<std::endl;
    break;
    
    default :
        std::cout<<"The value is not equal to 0"<<std::endl;
        break;
    }

    // for loops for(initialization; condition; increment/decrement)

    for(int x=0; x<10; x++){

    // std::cout<<"x is now : "<<x<<std::endl;

    if( x>4 ){

        std::cout<<"we are half way to the end and x is : "<<x<<std::endl;

    }
    if( x%2 == 0 ){

        std::cout<<"The even number is : "<<x<<std::endl;
    }

    }

}