#include<iostream>
#include<vector>

class classExample{

    public:
        int x = 7;
        int y;
        std::string name="george";
    classExample(){

        y = 8;

        std::cout<<"you just created an instance of me : "<<y<<std::endl;

    }

    int addTwo(){

        std::cout<<" x + y is : "<<x+y<<std::endl;
        return x + y;

    }

    int getZ(){

        return z_;
    }

    void setZ(int z){

        if(z > 10){

            std::cout<<"z is too large "<<std::endl;
        }

        else if(z < 0){

            std::cout<<"z cannot be larger than 0"<<std::endl;
        }

        else{z_ = z;}

    }

    std::vector<int> vecReturn(){

 return {6,7,8,9,10};
}

    private:
    int z_ = 9;


};

// int vector(){

 
// std::vector<int age> {1,2,3,4,45,5};


// return age;


// }






int main(){

    classExample class_instance;
    classExample another_banger;

    // std::cout<<"get x from class : "<<class_instance.x<<" and another data : "<<class_instance.name<<std::endl;

    // std::cout<<"get x from another instance of class: "<<another_banger.y<<" and another data : "<<another_banger.name<<std::endl;

    class_instance.addTwo();

    std::cout<<"This is z_ which is private : "<<class_instance.getZ()<<std::endl;

    // set z from here

    class_instance.setZ(-2);

    std::cout<<" This is z_ new value which is private : "<<class_instance.getZ()<<std::endl;



    std::vector<int> vec = class_instance.vecReturn();

    std::cout<<" The value of the vector is : "<<vec[3]<<std::endl;




}