#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <string>

using namespace std;

int BalancedBrackets(string S){
    int result = 0;
    stack <char> bracketsStack;

    for (const char &bracket: S){
        if (bracketsStack.size() > 0){
            if((bracketsStack.top() == '(' ) && (bracket == ')' )) 
                bracketsStack.pop();
            else
                bracketsStack.push(bracket);
        }
        else
        {
            bracketsStack.push(bracket);
        }
    cout << bracket;
    }

    return 0;
}

int main (){
    string S = "(())())))";
    cout << "starting Brackets: " << S << endl;
    BalancedBrackets(S);
    
    system("pause");
    return 0;
}