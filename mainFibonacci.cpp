#include <iostream>
#include <vector>

using namespace std;

int getNFibonacciElement(int n){
    std::vector <int> vector (n+1);
    int element;
    vector[0] = 1;
    vector[1] = 1;
    for (int i = 2; i < n; i++){
        vector[i] = vector[i-1] + vector[i-2];
        
        //Show every/each element of Fibonacci Sequence:
        if (i <= 2){
            cout << "Element number 1 of Fibonacci Sequence: 1" << endl;
            cout << "Element number 2 of Fibonacci Sequence: 1" << endl;
        }
        cout << "Element number " << i+1 <<  " of Fibonacci Sequence: " << vector[i] << endl;
    
    }
    element = vector[n-1];
    return element;
}


//sort()
// sortowanie kubełkwoe - sprawdzic
// przetwarzanie obrazu;

int main(){
    int n;
    cout << "Which n-element of Fibonacci Sequence you want to see?" << endl;
    cin >> n; 
    cout << endl << getNFibonacciElement(n) << endl;

    system("pause");
    return 0;
}