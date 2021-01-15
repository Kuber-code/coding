#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int Angle(int H, int M){
    
    int A = 0;
    A = abs(((360* H)/ 12) - ((360 *M) / 60));
    A = (A > 180) ? (360 - A) : A;

    return A;
}

int main(){

    int H, M;
    cout << "Put Hour: " << endl;
    cin >> H;
    cout << "Put Minute: " << endl;
    cin >> M;

    cout << "Angle between hands of clock: " << Angle(H, M) << " degrees";
    
    system("pause");
    return 0;
}