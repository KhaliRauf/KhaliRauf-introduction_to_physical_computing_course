#include<iostream>

class Shape{
 
     
    public:
    
        Shape(){

        }


        virtual void area(){}

        virtual void perimeter(){}


        virtual void display(){}


};

class square : public Shape{

    public:

        int length;
    
    square(int length){

        this->length = length;

    }

    void area() override{

        
        int area = length * length ;

        std::cout<<"The area of the square is : "<<area<<std::endl;
    }

    void perimeter()override{


        int perimeter = (4 * length) ;

        std::cout<<"The perimeter of the square is : "<<perimeter<<std::endl;
    }

    void display()override{
        std::cout<<"Square"<<std::endl;
    }

};

class circle : public Shape{ 

        public:

            int radius;
            double pi = 3.14159;

            circle(int radius){

                this->radius = radius;

            }

            void area( )override{

                
            double area = pi * (radius * radius);

                std::cout<<"The area of the circle is : "<<area<<std::endl;
            }

            void perimeter( )override{


            double perimeter = 2 * pi * radius ;

                std::cout<<"The circumference of the circle is : "<<perimeter<<std::endl;
            }

            void display()override{
                std::cout<<"Circle"<<std::endl;
            }

};








int main(){

    

square squareobj(6);
squareobj.area();
squareobj.perimeter();
squareobj.display();

circle circleobj(9);
circleobj.area();
circleobj.perimeter();
circleobj.display();



}