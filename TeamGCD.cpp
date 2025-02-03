// Online C++ compiler to run C++ program online
#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    int size;
    cin >> size;
    vector<int> res(size+1,-1);
    
    for(int i = 1; i <= size; i++){
        int digit;
        cin >> digit;
        res[i] = digit;
    }
    
    int days;
    cin >> days;
    
    for(int i = 0; i < days; i++){
        if(size == 1){
            int e1;
            cin >> e1;
            cout << res[e1] << endl;
        }
        else{
            int e1, e2;
            cin >> e1 >> e2;
            res[e1] = gcd(res[e1],res[e2]);
            res[e2] = gcd(res[e1],res[e2]);
            cout << res[e1] << endl;
        }
        
    }
    return 0;
}