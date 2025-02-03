#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> map;
    int count;
    cin >> count;
    for(int i = 0; i < count; i++){
        string snack;
        cin >> snack;
        map[snack]++;
    }
    int number = 0;
    string final;
    for(const auto& num : map){
        if(num.second > number){
            final = num.first;
            number = num.second;
        }
        else if(num.second == number){
            if(num.first.length() < final.length()){
                final = num.first;
            }
        }
    }
    cout << final << endl;
    return 0;
}