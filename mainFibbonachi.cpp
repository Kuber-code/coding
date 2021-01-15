#include <iostream>
#include <vector>

using namespace std;

int getNFibonnaciElement(int n){
    std::vector <int> vector (n+1);
    int elemnt;
    vector[0] = 1;
    vector[1] = 1;
    for (int i = 2; i < n; i++){
        vector[i] = vector[i-1] + vector[i-2];
    }
    element = vector[n-1];
    return element;
}

sort()
// sortowanie kubełkwoe - sprawdzic
// przetwarzanie obrazu;

int main(){
getNFibonnaciElement();

system("pause");
return 0;
}