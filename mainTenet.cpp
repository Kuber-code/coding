/*
    TASK DESCRIPTION – #Palindorm #Tenet

    Task:
    Write a function that check if a word string is palindorm or no

*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;


bool isWordTenet(string wordString){

    //stringToVector(wordString);
    
    bool result = true; 
    wordString = "Tenet";
    for(char& c : wordString) {
        cout << c;
        //do_things_with(c);
    }
    string reversedString;
    reversedString = reverse(wordString.begin(), wordString.end());
    for(char& c : reversedString) {
        cout << c;
        //do_things_with(c);
    }

    cout << reversedString;
    return result;
}

int main(){
    string wordString;
    isWordTenet(wordString);
    
    return 0;
}

    // LOOPING THROUGH FOR
    // 1. Looping through the characters of a std::string, using a range-based for loop 
    // for(char& c : str) {
    //     do_things_with(c);
    // }

    // 2. Looping through the characters of a std::string with iterators:
    // for(std::string::iterator it = str.begin(); it != str.end(); ++it) {
    //     do_things_with(*it);
    // }

    // 3. Looping through the characters of a std::string with an old-fashioned for-loop:
    // std::string str = ???;
    // for(std::string::size_type i = 0; i < str.size(); ++i) {
    //     do_things_with(str[i]);
    // }

    // 4. Looping through the characters of a null-terminated character array:
    // char* str = ???;
    // for(char* it = str; *it; ++it) {
    //     do_things_with(*it);
    // }