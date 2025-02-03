// Online C++ compiler to run C++ program online
#include <iostream>
#include <numeric>
using namespace std;

int main() {
    int clues;
    cin >> clues;
    int num = 1;
    for(int i = 0; i < clues; i++){
        string input;
        int div;
        cin >> div >> input;
        if(i == 0 && input == "Yes"){
            num *= div;
        }
        if(input == "Yes"){
            num = lcm(num,div);
        }
    }
    cout << num << endl;
    return 0;
}