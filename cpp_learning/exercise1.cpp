#include<iostream>

// tuple<> swap(int x,int y){
//     std::cout<<"Input the first number : "<<std::endl;
//     std::cin>>x;
//     std::cout<<"Input the second number : "<<std::endl;
//     std::cin>>y;
// return (y,x);


   
// }




int main(){

int temp;
int x;
std::cout<<"Input the first number : "<<std::endl;
std::cin>>x;

int y;
std::cout<<"Input the second number : "<<std::endl;
std::cin>>y;

temp = x;

x = y;
y = temp;

 
 std::cout<<"The first number is : "<<x<<std::endl;
 std::cout<<"The second number is : "<<y<<std::endl;

 std::cout<<"-----------------------"<<std::endl;

 /**
 * calculate the volume of a sphere:
 * input the radius of the sphere:
 * the volume of the sphere is :
 * 
 * 
 * */

int radius;
std::cout<<"Input the radius of the sphere : "<<radius<<std::endl;
std::cin>>radius;

int volOfSphere = ((4/3)*(22/7)*((radius)*(radius)*(radius)));
std::cout<<"The volume of the sphere is : "<<volOfSphere<<std::endl;

 std::cout<<"-----------------------"<<std::endl;

/**
 *  * calculate the volume of the cube :
 * input the length of the cube : 
 * 
 */

int length;
std::cout<<"Input the length of the cube : "<<length<<std::endl;
std::cin>>length;

int volOfCube = ((length)*(length)*(length));
std::cout<<"The volume of the cube is : "<<volOfCube<<std::endl;

 std::cout<<"-----------------------"<<std::endl;

/**
 * calculate the volume of a cylinder:
 * input the radius of a cylinder:
 * input the height of a cylinder:
 */

int height;
int radiusCyl;
std::cout<<"Input the height of the cylinder : "<<height<<std::endl;
std::cin>>height;
std::cout<<"Input the radius of the cylinder : "<<radiusCyl<<std::endl;
std::cin>>radiusCyl;

int volOfCyl = (22/7)*((radiusCyl)*(radiusCyl))*(height);
std::cout<<"The volume of the cylinder is : "<<volOfCyl<<std::endl;

 std::cout<<"-----------------------"<<std::endl;

/**
 * Find the area and perimeter of a rectangle:
 */

int lengthOfRec;
int width;
std::cout<<"Input the lenth of the rectangle : "<<lengthOfRec<<std::endl;
std::cin>>lengthOfRec;
std::cout<<"Input the width of the rectangle : "<<width<<std::endl;
std::cin>>width;

int areaOfRec = lengthOfRec*width;
int perimeter = (2*lengthOfRec)+(2*width);

std::cout<<"The perimeter of the rectangle is : "<<perimeter<<std::endl;
std::cout<<"The area of the rectangle is : "<<areaOfRec<<std::endl;




}