#include<iostream>
#include<string>

class Animals{

    public:
        Animals(){


        }

        virtual void sound(){

            std::cout<<"bark"<<std::endl;
        }

        void printSomething(){

            std::cout<<"hello there"<<std::endl;
        }


};

class cat : public Animals{

    public:
        std::string animal;

        cat(std::string animal_name){

            animal = animal_name;

        }

        

        void sound() override{

             std::cout<<"Mewww"<<std::endl;

        }

        void display(){

             std::cout<<"animal name: "<<animal<<std::endl;
        }


};



int main(){

    cat catobjt("cat");

    catobjt.display();

    catobjt.printSomething();

    return 0;
}