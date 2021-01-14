/*
    TASK DESCRIPTION – #Palindorm #Tenet

    Task:
    Write a function that check if a word string is palindorm or no

*/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

void printString(string wordString){
    for(char& c : wordString) {
        cout << c;
        //do_things_with(c);
    }
    cout << endl;
}

void showWords(string wordString){
    cout << "String: " << endl;
    cout << wordString << endl; 
    string reversedString = wordString;
    reverse(reversedString.begin(), reversedString.end());
    cout << "Reversed String: " << endl;
    cout << reversedString << endl;
}

void isWordTenet(string wordString){
    bool result;
    std::vector<char> wordChars (wordString.begin(), wordString.end());
    auto length = wordChars.size();

    for(auto i = 0; i < length; i++){

        //Showing sequenced characters of string
        //cout << " wordChars[i] = " << wordChars[i] << endl;
        //cout << " wordChars[length-i-1] = " << wordChars[length-i-1] << endl;

        if(wordChars[i] != wordChars[length-i-1]){
            result = false;
            //cout << "word in NOT a palindrom" << result << endl;
            break;
        }
        else{
            result = true;
            //cout << "word in  a palindrom" << result << endl;
        }
    }
    if (result){
        cout << wordString << " is a palindrom" << endl;
    }
    else{
        cout << wordString << " is NOT a palindrom" << endl;
    }  
}

int main(){

    //string wordString = "tenet";

    cout << "Put your word" << endl; 
    string wordString;
    cin >> wordString;

    //showWords(wordString);
    isWordTenet(wordString);
 
    system("pause");
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