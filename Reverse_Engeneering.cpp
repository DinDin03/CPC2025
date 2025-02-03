#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int number, freq;
    cin >> number;
    cin >> freq;
    
    for(int i = 0; i < freq; i++){
        string ascending = to_string(number);
        string descending = to_string(number);
        
        sort(ascending.begin(), ascending.end());
        sort(descending.rbegin(), descending.rend());
        
        int difference = abs(stoi(ascending) - stoi(descending));
        number = difference;
    }
    string sNumber = to_string(number);
    if(sNumber.length() < 4){
        int pad = 4 - sNumber.length();
        for(int i = 0; i < pad; i++){
            sNumber += "0";
            reverse(sNumber.begin(), sNumber.end());
        }
    }
    cout << sNumber << endl;
    return 0;
}