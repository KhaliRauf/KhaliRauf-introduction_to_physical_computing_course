#include<iostream>

int main(){
//array
// std::string combo[5];

// std::string food[8] = {"rice","beans", "spaghetti" ,"yam", "bread", "fried-rice", "jollof-rice", "ewedu"};

// std::cout<<"food at index 6 is : "<<food[6]<<std::endl;

// food[0] = food[6];

// std::cout<<"food at index o is : "<<food[0]<<std::endl;

// for(int fd = 0; fd < sizeof(food)/sizeof(food[0]); fd++){

//     std::cout<<"food at index: "<<fd<<" is : "<<food[fd]<<std::endl;


// }
// -

/**
 * char char_arr[5] = {'a','c','h','t','u'}
 * 
 * given the array of characters above, find the number of vowels in the array and print it out
 */
char char_arr[5] = {'a','c','h','t','u'};

char vowels_chars[5] = {'a','e','i','o','u'};

int vowel_counter = 0;

int counter;

for(int vw = 0; vw < sizeof(char_arr)/sizeof(char_arr[0]); vw++){

    if(char_arr[vw] == vowels_chars[0] ||char_arr[vw] == vowels_chars[1] ||char_arr[vw] == vowels_chars[2] ||char_arr[vw] == vowels_chars[3] ||char_arr[vw] == vowels_chars[4]){

        vowel_counter++;
    
    }
}
std::cout<<"The number of vowels in the array {'a','c','h','t','u'} is : "<<vowel_counter<<std::endl;

}

